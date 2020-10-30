#include "sym_tab.h"


void add_word(int key, char *name) {
    struct word *s;
    HASH_FIND_INT(symbol_table, &key, s);
    if (s == NULL) {
        s = (struct word *) malloc(sizeof *s);
        s->key = key;
        HASH_ADD_INT(symbol_table, key, s);
    }
    strcpy(s->name, name);
}

struct word *find_word(int word_key) {
    struct word *s;

    HASH_FIND_INT(symbol_table, &word_key, s);
    return s;
}

void delete_word(struct word *s) {
    HASH_DEL(symbol_table, s);
    free(s);
}

void delete_all() {
    struct word *cur_word, *tmp;

    HASH_ITER(hh, symbol_table, cur_word, tmp) {
        HASH_DEL(symbol_table, cur_word);
        free(cur_word);
    }
}