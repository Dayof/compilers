#include <stdio.h>
#include "scope.h"


void print_stack_st() {
    scope *aux_scope;
    int count_stack;
    STACK_COUNT(scope_stack, aux_scope, count_stack);
    scope *current_scope = scope_stack;
    for (int i=0; i <= count_stack - 1; ++i) {
        print_st_with_ref_and_scope(current_scope->symbol_table, current_scope);
        printf("\n");
        current_scope = current_scope->next;
    }
}

void print_st_with_ref_and_scope(word *symbol_table, scope *cur_scope) {
    if (HASH_COUNT(symbol_table) == 0) {
        printf("Empty symbol table.\n");
        return;
    }

    for (word* cur_word = symbol_table; cur_word != NULL;
         cur_word = cur_word->hh.next) {
        printf("SCOPE: %-12s | NAME: %-12s | LINE: %-3d | COLUMN: %-3d | ",
                cur_scope->scope_name, cur_word->name, cur_word->line,
                cur_word->col);
        if (cur_word->id_type == ST_ID_VAR) printf("ID TYPE: VAR");
        else if (cur_word->id_type == ST_ID_FUNC) printf("ID TYPE: FUNC");
        else if (cur_word->id_type == ST_ID_UNDEFINED) printf("ID TYPE: undefined");
        printf("\n");
    }
}

void start_root_scope() {
    if (SEMANTIC_VERBOSE) printf("[SCOPE] Creating root scope\n");
    scope_stack = (scope*) malloc(sizeof(scope));
    scope_stack->lvl = 0;
    top_lvl = 0;
    strcpy(scope_stack->scope_name, "global");
    scope_stack->symbol_table = new_symbol_table(); // starts empty symbol table
    scope_stack->next = NULL;
}

void start_root_lookup() {
    if (SEMANTIC_VERBOSE) printf("[SCOPE] Creating lookup structure\n");
    global_lookup_detail = (lookup_detail*) malloc(sizeof(lookup_detail));
    global_lookup_detail->ctx_symbol = NULL;
    global_lookup_detail->ctx_scope = NULL;
}

void push_scope_block() {
    scope *new_scope = (scope*) malloc(sizeof(scope));
    new_scope->lvl = top_lvl + 1;
    top_lvl = new_scope->lvl;
    if (SEMANTIC_VERBOSE) printf("[SCOPE] Push scope %s, lvl %d\n",
                                 "block", new_scope->lvl);
    strcpy(new_scope->scope_name, "block");
    new_scope->symbol_table = new_symbol_table(); // starts empty symbol table
    STACK_PUSH(scope_stack, new_scope);  
}

void push_scope(int key) {
    word *word_found = find_word(key);
    if (word_found != NULL) {
        scope *new_scope = (scope*) malloc(sizeof(scope));
        new_scope->lvl = top_lvl + 1;
        top_lvl = new_scope->lvl;
        if (SEMANTIC_VERBOSE) printf("[SCOPE] Push scope %s, lvl %d\n",
                                    word_found->name, new_scope->lvl);
        strcpy(new_scope->scope_name, word_found->name);
        new_scope->symbol_table = new_symbol_table(); // starts empty symbol table
        STACK_PUSH(scope_stack, new_scope);  
    } else {
        scope *new_scope = (scope*) malloc(sizeof(scope));
        new_scope->lvl = top_lvl + 1;
        top_lvl = new_scope->lvl;
        if (SEMANTIC_VERBOSE) printf("[SCOPE] Push scope lvl %d, key %d does not exist anymore\n",
                                    new_scope->lvl, key);
        strcpy(new_scope->scope_name, "null");
        new_scope->symbol_table = new_symbol_table(); // starts empty symbol table
        STACK_PUSH(scope_stack, new_scope);  
    }
}

void pop_scope() {
    scope *aux_scope;
    STACK_POP(scope_stack, aux_scope);
    if (SEMANTIC_VERBOSE)
        printf("[SCOPE] Pop scope %s, lvl %d\n", aux_scope->scope_name,
               aux_scope->lvl);
    delete_st_with_ref(aux_scope->symbol_table);
    free(aux_scope);
}

int insert_symbol(int key) {
    word *word_found = find_word(key);
    global_lookup_detail = lookup_symbol(word_found->name);
    if (global_lookup_detail->ctx_scope != NULL) {
        // tag to remove duplicate symbol in the global symbol table later
        set_existance_tag(key, ET_SOFT_DELETE);
        raise_error_declared(word_found, global_lookup_detail->ctx_symbol,
                            global_lookup_detail->ctx_scope);
        return 0; // symbol already exists
    }
    
    scope* current_scope = STACK_TOP(scope_stack);
    if (SEMANTIC_VERBOSE)
        printf("[SCOPE] Insert symbol %s to scope %s, lvl %d\n",
        word_found->name, current_scope->scope_name, current_scope->lvl);
    add_word_to_sym_tab(&current_scope->symbol_table, word_found->key,
                        word_found->name, word_found->line, word_found->col,
                        word_found->id_type);
    set_scope(word_found, current_scope->lvl, current_scope->scope_name);
    return 1;
}

lookup_detail* lookup_symbol(char *name) {
    scope *aux_scope;
    int count_stack;
    STACK_COUNT(scope_stack, aux_scope, count_stack);
    scope *current_scope = scope_stack;
    for (int i=0; i <= count_stack - 1; ++i) {
        if (SEMANTIC_VERBOSE) printf("[SCOPE] Looking symbol %s in scope %s, lvl %d\n",
                                    name, current_scope->scope_name,
                                    current_scope->lvl);
        word *word_found = find_word_in_sym_tab(current_scope->symbol_table, name);
        if (word_found == NULL) {
            if (SEMANTIC_VERBOSE) printf("[SCOPE] Symbol %s was not found in scope %s, lvl %d\n",
                                        name, current_scope->scope_name,
                                        current_scope->lvl);
            // name was not found in current symbol table
            // lets try to find the symbol in the next symbol table in the stack
            current_scope = current_scope->next; 
        }
        else {
            global_lookup_detail->ctx_scope = current_scope;
            global_lookup_detail->ctx_symbol = word_found;
            return global_lookup_detail; // name was found in the current symbol table/stack
        }
    }
    global_lookup_detail->ctx_scope = NULL;
    global_lookup_detail->ctx_symbol = NULL;
    return global_lookup_detail; // name was not found in any scope in the current stack
}

int check_main() {
    scope *aux_scope;
    int count_stack;
    STACK_COUNT(scope_stack, aux_scope, count_stack);
    scope *current_scope = scope_stack;
    for (int i=0; i <= count_stack - 1; ++i) {
        if (SEMANTIC_VERBOSE) printf("[SCOPE] Looking for a main function in scope %s, lvl %d\n",
                                     current_scope->scope_name, current_scope->lvl);
        word *word_found = find_word_in_sym_tab(current_scope->symbol_table, "main");
        if (word_found == NULL) {
            if (SEMANTIC_VERBOSE) printf("[SCOPE] Main was not found in scope %s, lvl %d\n",
                                         current_scope->scope_name, current_scope->lvl);
            // main was not found in current symbol table
            // lets try to find it in the next symbol table in the stack
            current_scope = current_scope->next; 
        }
        else {
            if (word_found->id_type == ST_ID_FUNC)
                return 0; // main was found in the current symbol table/stack
        }
    }
    raise_error_main();
    return 1; // main was not found in any scope in the current stack
}

int check_declared(int key) {
    word *word_found = find_word(key);
    global_lookup_detail = lookup_symbol(word_found->name);
    // symbol does not exist
    if (global_lookup_detail->ctx_scope == NULL) {
        raise_error_not_declared(word_found);
        // tag to remove symbol in the global symbol table later
        set_existance_tag(key, ET_SOFT_DELETE);
        return 0;
    } else {
        set_existance_tag(key, ET_REF);
        set_scope(word_found, global_lookup_detail->ctx_scope->lvl,
                  global_lookup_detail->ctx_scope->scope_name);
    }
    return 1;
}

int check_arity(word *word_found, word *word_decl) {
    word *global_decl = find_word(word_decl->key);
    if (SEMANTIC_VERBOSE)
        printf("[SCOPE] Function call arity %d, declaration arity %d.\n",
               word_found->arity, global_decl->arity);
    if (word_found->arity != global_decl->arity) {
        raise_error_func_arity(word_found, global_decl);
        return 0;
    }
    return 1;
}

int check_function(int key) {
    word *word_found = find_word(key);
    global_lookup_detail = lookup_symbol(word_found->name);
    // this symbol does not exist, neither as a variable nor as a function
    if (global_lookup_detail->ctx_scope == NULL) { 
        if (SEMANTIC_VERBOSE)
            printf("[SCOPE] Function %s was not found.\n", word_found->name);
        raise_error_not_declared(word_found);
        // tag to remove symbol in the global symbol table later
        set_existance_tag(key, ET_SOFT_DELETE);
        return 0;
    } else {
        if (SEMANTIC_VERBOSE) {
            printf("[SCOPE] Symbol '%s' was found.\n", word_found->name);
            printf("\n## Symbol Table ##\n\n");
            print_st_with_ref(global_lookup_detail->ctx_symbol);
            printf("\n");
        }
        // this symbol does exists, check if it a var or a function
        if (global_lookup_detail->ctx_symbol->id_type == ST_ID_VAR ||
            global_lookup_detail->ctx_symbol->id_type == ST_ID_UNDEFINED) {
            if (SEMANTIC_VERBOSE)
                printf("[SCOPE] '%s' is actually a variable or it is undefined.\n",
                       word_found->name);
            raise_error_not_func(word_found, global_lookup_detail->ctx_symbol,
                                 global_lookup_detail->ctx_scope);
            set_existance_tag(key, ET_SOFT_DELETE);
            return 0;
        } else if (global_lookup_detail->ctx_symbol->id_type == ST_ID_FUNC) {
            if (SEMANTIC_VERBOSE)
                printf("[SCOPE] '%s' is a function.\n", word_found->name);
            if (check_arity(word_found, global_lookup_detail->ctx_symbol)) {
                set_existance_tag(key, ET_REF);
                set_scope(word_found, global_lookup_detail->ctx_scope->lvl,
                        global_lookup_detail->ctx_scope->scope_name);
            } else
                // if arity is different, tag symbol to delete later
                set_existance_tag(key, ET_SOFT_DELETE);
        }
    }
    return 1;
}

void delete_all_stack() {
    if (SEMANTIC_VERBOSE) printf("[SCOPE] Deleting all stack.\n");
    scope *aux_scope;
    while (!STACK_EMPTY(scope_stack)) {
        STACK_POP(scope_stack, aux_scope);
        if (SEMANTIC_VERBOSE) 
            printf("[SCOPE] Deleting stack element lvl %d.\n", aux_scope->lvl);
        delete_st_with_ref(aux_scope->symbol_table);
        free(aux_scope);
    }
}

void delete_scope(scope *cur_scope) {
    if (SEMANTIC_VERBOSE) printf("[SCOPE] Deleting scope.\n");
    scope *aux_scope;
    STACK_POP(cur_scope, aux_scope);
    delete_st_with_ref(aux_scope->symbol_table);
    free(aux_scope);
}

void delete_lookup() {
    if (SEMANTIC_VERBOSE) printf("[SCOPE] Deleting lookup.\n");
    free(global_lookup_detail);
}

void raise_error_main() {
    printf("\nSemanticError: 'main' function was not found in the source code.\n");
    semantic_error += 1;
}

void raise_error_func_arity(word *word_found, word *word_decl) {
    printf("\nSemanticError:%d:%d: '%s' does not match the function declaration.\n" 
           "The function call contains %d parameters and '%s' was declared with "
           "%d parameters.\n", word_found->line, word_found->col,
           word_found->name, word_found->arity, word_found->name,
           word_decl->arity);
    semantic_error += 1;
}

void raise_error_not_func(word *word_found, word *word_decl, scope *cur_scope) {
    printf("\nSemanticError:%d:%d: '%s' was used as a function but '%s' was " 
           "declared as a variable in line %d, column %d.\n", word_found->line,
           word_found->col, word_found->name, word_found->name, word_decl->line,
           word_decl->col);
    semantic_error += 1;
}

void raise_error_not_declared(word *word_found) {
    printf("\nSemanticError:%d:%d: '%s' was not declared.\n", word_found->line,
           word_found->col, word_found->name);
    semantic_error += 1;
}

void raise_error_declared(word *word_found, word *word_decl, scope *cur_scope) {
    printf("\nSemanticError:%d:%d: '%s' was already declared in line %d, "
           "column %d.\nThis symbol belongs to the scope '%s', lvl %d.\n",
           word_found->line, word_found->col, word_found->name,
           word_decl->line, word_decl->col, cur_scope->scope_name,
           cur_scope->lvl);
    semantic_error += 1;
}