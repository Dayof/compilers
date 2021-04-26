#ifndef __SCOPE_H__
#define __SCOPE_H__

#include "utstack.h"
#include "sym_tab.h"

typedef struct scope {
    int lvl;
    char scope_name[50];
    word* symbol_table;
    struct scope *next;
} scope;

typedef struct lookup_detail {
    word *ctx_symbol;
    scope *ctx_scope;
} lookup_detail;

scope* scope_stack;
int top_lvl, insert_result, arity_counter;

void start_root_scope();
void push_scope(int key);
void push_scope_block();
scope* pop_scope();
int insert_symbol(int key);
lookup_detail* lookup_symbol(char *name, int key);

void raise_error_func_arity(word *word_found, word *word_decl);
void raise_error_not_func(word *word_found, word *word_decl, scope *cur_scope);
void raise_error_declared(word *word_found, word *word_decl, scope *cur_scope);
void raise_error_not_declared(word *word_found);
void raise_error_main();

void print_stack_st();
void print_st_with_ref_and_scope(word *symbol_table, scope *cur_scope);

int check_main();
int check_declared(int key);
int check_function(int key);
int check_arity(word *word_found, word *word_decl);

#endif // __SCOPE_H__