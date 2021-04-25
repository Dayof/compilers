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

scope* scope_stack;
int top_lvl, func_insert_result, param_insert_result;

void start_root_scope();
void push_scope(int key);
void push_scope_block();
scope* pop_scope();
int insert_symbol(int key);
int lookup_symbol(char *name, int key);
void raise_error(word *word_found, scope *cur_scope);
void print_stack_st();
void print_st_with_ref_and_scope(word *symbol_table, scope *cur_scope);

#endif // __SCOPE_H__