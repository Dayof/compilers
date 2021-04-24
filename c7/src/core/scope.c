#include <stdio.h>
#include "scope.h"

void print_scope() {

}

void start_root_scope() {
    if (SEMANTIC_VERBOSE) printf("\nCreating root scope\n");
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
    if (SEMANTIC_VERBOSE) printf("\nPush scope %s, lvl %d\n",
                                 scope_name, new_scope->lvl);
    strcpy(new_scope->scope_name, scope_name);
    new_scope->symbol_table = new_symbol_table(); // starts empty symbol table
    STACK_PUSH(scope_stack, new_scope);  
}

void push_scope(int key) {
    word *word_found = find_word(key);
    scope *new_scope = (scope*) malloc(sizeof(scope));
    new_scope->lvl = top_lvl + 1;
    top_lvl = new_scope->lvl;
    if (SEMANTIC_VERBOSE) printf("\nPush scope %s, lvl %d\n",
                                 word_found->name, new_scope->lvl);
    strcpy(new_scope->scope_name, word_found->name);
    new_scope->symbol_table = new_symbol_table(); // starts empty symbol table
    STACK_PUSH(scope_stack, new_scope);  
}

scope* pop_scope() {
    scope *aux_scope;
    STACK_POP(scope_stack, aux_scope);
    if (SEMANTIC_VERBOSE) printf("\nPop scope %s, lvl %d\n",
                                 aux_scope->scope_name, aux_scope->lvl);
    return aux_scope;
}

void insert_symbol(int key) {
    word *word_found = find_word(key);
    scope* current_scope = STACK_TOP(scope_stack);
    if (SEMANTIC_VERBOSE) printf("\nInsert symbol %s to scope %s, lvl %d\n",
                                 word_found->name, current_scope->scope_name,
                                 current_scope->lvl);
    add_word_to_sym_tab(current_scope->symbol_table, word_found->key,
                        word_found->name, word_found->line, word_found->col,
                        word_found->id_type);
}

void lookup_symbol(char *name) {
    
}
