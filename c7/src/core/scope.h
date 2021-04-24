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
int top_lvl;

void start_root_scope();
void push_scope(int key);
void push_scope_block();
scope* pop_scope();
void print_scope();
void insert_symbol(int key);
void lookup_symbol(char *name);

#endif // __SCOPE_H__