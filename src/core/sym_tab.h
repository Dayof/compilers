#ifndef __SYM_TAB_H__
#define __SYM_TAB_H__

#include "uthash.h"

struct word {
    int key;
    char name[50];
    UT_hash_handle hh; /* makes this structure hashable */
};

struct word *symbol_table;

void add_word(int key, char *name);
struct word *find_word(int word_key);
void delete_word(struct word *s);
void delete_all();

#endif // __SYM_TAB_H__