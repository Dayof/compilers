#ifndef __SYM_TAB_H__
#define __SYM_TAB_H__

#include "uthash.h"
#include "ast.h"

enum ID_TYPES {
    ST_ID_UNDEFINED=0,
    ST_ID_FUNC,
    ST_ID_VAR
};

enum EXISTANCE_TAG {
    ET_OK=0,
    ET_REF,
    ET_SOFT_DELETE
};

typedef struct word_pos {
    int key, id_type, line, col, scope_lvl, tag;
    char name[50], scope_name[50];
    UT_hash_handle hh; /* makes this structure hashable */
} word;

word* global_symbol_table;

int len_st();
void print_aux_st();

int add_word(int key, char *name, int line, int col);
word* find_word(int word_key);
void delete_word(word* s);
void delete_all_st();
void remove_symbol(int key);

void set_id_type(int key, int id_type);
void set_scope(word *symbol, int scope_lvl, char *scope_name);
void set_existance_tag(int key, int tag);

word* new_symbol_table();
void add_word_to_sym_tab(word **symbol_table, int key, char* name,
                         int line, int col, int id_type);
word* find_word_in_sym_tab(word* symbol_table, char *name);
void print_st_with_ref(word *symbol_table);

#endif // __SYM_TAB_H__