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
    char scope_name[6] = "global";
    strcpy(scope_stack->scope_name, scope_name);
    scope_stack->symbol_table = new_symbol_table(); // starts empty symbol table
    scope_stack->next = NULL;
}

void push_scope_block() {
    char scope_name[50] = "block";
    scope *new_scope = (scope*) malloc(sizeof(scope));
    new_scope->lvl = top_lvl + 1;
    top_lvl = new_scope->lvl;
    if (SEMANTIC_VERBOSE) printf("[SCOPE] Push scope %s, lvl %d\n",
                                 scope_name, new_scope->lvl);
    strcpy(new_scope->scope_name, scope_name);
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

scope* pop_scope() {
    scope *aux_scope;
    STACK_POP(scope_stack, aux_scope);
    if (SEMANTIC_VERBOSE) printf("[SCOPE] Pop scope %s, lvl %d\n",
                                 aux_scope->scope_name, aux_scope->lvl);
    return aux_scope;
}

int insert_symbol(int key) {
    word *word_found = find_word(key);
    lookup_detail *res_lookup = lookup_symbol(word_found->name, key);
    if (res_lookup->ctx_scope != NULL) {
        raise_error_declared(res_lookup->ctx_symbol, res_lookup->ctx_scope);
        return 0; // symbol already exists
    }
    
    scope* current_scope = STACK_TOP(scope_stack);
    if (SEMANTIC_VERBOSE) printf("[SCOPE] Insert symbol %s to scope %s, lvl %d\n",
                                word_found->name, current_scope->scope_name,
                                current_scope->lvl);
    add_word_to_sym_tab(&current_scope->symbol_table, word_found->key,
                        word_found->name, word_found->line, word_found->col,
                        word_found->id_type);
    set_scope(word_found, current_scope->lvl, current_scope->scope_name);
    return 1;
}

lookup_detail* lookup_symbol(char *name, int key) {
    scope *aux_scope;
    int count_stack;
    STACK_COUNT(scope_stack, aux_scope, count_stack);
    scope *current_scope = scope_stack;
    lookup_detail *res_lookup = (lookup_detail*) malloc(sizeof(lookup_detail));
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
            // tag to remove duplicate symbol in the global symbol table later
            set_existance_tag(key, ET_SOFT_DELETE);
            res_lookup->ctx_scope = current_scope;
            res_lookup->ctx_symbol = word_found;
            return res_lookup; // name was found in the current symbol table/stack
        }
    }
    res_lookup->ctx_scope = NULL;;
    res_lookup->ctx_symbol = NULL;
    return res_lookup; // name was not found in any scope in the current stack
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
    lookup_detail *res_lookup = lookup_symbol(word_found->name, key);
    // symbol do not exist
    if (res_lookup->ctx_scope == NULL) {
        raise_error_not_declared(word_found);
        // tag to remove symbol in the global symbol table later
        set_existance_tag(key, ET_SOFT_DELETE);
        return 0;
    }
    return 1;
}

void raise_error_main() {
    printf("\nSemanticError: 'main' function was not found in the source code.\n");
    semantic_error += 1;
}

void raise_error_not_declared(word *word_found) {
    printf("\nSemanticError: '%s' was not declared.\n", word_found->name);
    semantic_error += 1;
}

void raise_error_declared(word *word_found, scope *cur_scope) {
    printf("\nSemanticError: '%s' was already declared in line %d, column %d.\n"
           "This symbol belongs to scope '%s', lvl %d.\n", word_found->name,
           word_found->line, word_found->col, cur_scope->scope_name,
           cur_scope->lvl);
    semantic_error += 1;
}