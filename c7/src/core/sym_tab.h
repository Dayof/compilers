#ifndef __SYM_TAB_H__
#define __SYM_TAB_H__

#include "uthash.h"
#include "utstack.h"
#include "ast.h"

enum ID_TYPES {
    ST_ID_UNDEFINED=0,
    ST_ID_FUNC,
    ST_ID_VAR
};

enum SCOPE_OPT {
    SAME_LVL=0,
    INC_LVL,
    DEC_LVL,
    NEW_LVL,
    RM_LVL
};

typedef struct word_pos {
    int key, id_type, scope;
    char name[50];
    UT_hash_handle hh; /* makes this structure hashable */
} word;

typedef struct item_detail {
    int item, scope_lvl;
    struct item_detail *next;
} stack_item;

stack_item* stack_root;
word* symbol_table;
int global_opt, global_total_scope, global_scope, global_next_scope;

int len_st();
void print_st();

int add_word(int key, char *name);
word* find_word(int word_key);
void delete_word(word* s);
void delete_all_st();
void set_id_type(int key, int id_type);
void set_scope(int key, int scope);

stack_item* create_stack_item(int cur_scope, int item);

int push_to_stack(int item);
void pop_stack_scopes();
int get_last_scope();
void update_global_refs();

int len_stack();
void print_stack ();

#endif // __SYM_TAB_H__