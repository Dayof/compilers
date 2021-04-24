#ifndef __SYM_TAB_H__
#define __SYM_TAB_H__

#include "uthash.h"
#include "ast.h"

enum ID_TYPES {
    ST_ID_UNDEFINED=0,
    ST_ID_FUNC,
    ST_ID_VAR
};

typedef struct word_pos {
    int key, id_type, line, col;
    char name[50];
    UT_hash_handle hh; /* makes this structure hashable */
} word;

word* global_symbol_table;

int len_st();
void print_st();

int add_word(int key, char *name, int line, int col);
word* find_word(int word_key);
void delete_word(word* s);
void delete_all_st();
void set_id_type(int key, int id_type);

word* new_symbol_table();
void add_word_to_sym_tab(word* symbol_table, int key, char* name,
                         int line, int col, int id_type);

#endif // __SYM_TAB_H__