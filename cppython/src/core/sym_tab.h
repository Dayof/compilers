#ifndef __SYM_TAB_H__
#define __SYM_TAB_H__

#include "uthash.h"

int lex_error;

enum TYPES {
    ST_NONE=0,
    ST_INT,
    ST_FLOAT,
    ST_BOOL,
    ST_STR
};

typedef struct word_pos {
    int key, type;
    char name[50];
    UT_hash_handle hh; /* makes this structure hashable */
} word;

word* symbol_table;

int len_st();
void print_st();

int add_word(int key, char *name);
word* find_word(int word_key);
void delete_word(word* s);
void delete_all_st();

#endif // __SYM_TAB_H__