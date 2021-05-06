#ifndef __SYM_TAB_H__
#define __SYM_TAB_H__

#include "uthash.h"
#include "ast.h"

enum DATA_TYPE {
    DT_UNDEFINED=0,
    DT_INT,
    DT_FLOAT,
    DT_FLOAT_IF,
    DT_SET,
    DT_ELEM
};

enum ID_TYPE {
    ST_ID_UNDEFINED=0,
    ST_ID_FUNC,
    ST_ID_VAR,
    ST_ID_PARAM
};

enum EXISTANCE_TAG {
    ET_OK=0,
    ET_REF,
    ET_SOFT_DELETE
};

typedef struct word_pos {
    int key, id_type, line, col, scope_lvl, tag, arity, data_type, tac_register;
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
void delete_st_with_ref(word *symbol_table);
void remove_symbol(int key);

void set_id_type(int key, int id_type);
void set_scope(word *symbol, int scope_lvl, char *scope_name);
void set_existance_tag(int key, int tag);
void set_arity(int key, int arity);
void set_data_type(int key, int data_type);
void set_register(int key, int tac_register);

word* new_symbol_table();
void add_word_to_sym_tab(word **symbol_table, int key, char* name,
                         int line, int col, int id_type);
word* find_word_in_sym_tab(word* symbol_table, char *name);
void print_st_with_ref(word *symbol_table);

char* datatype2str(int data_type);
int type2dt(char *type);

#endif // __SYM_TAB_H__