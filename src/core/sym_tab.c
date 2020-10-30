#include <stdio.h>
#include "sym_tab.h"


void add_word(int key, char* name) {
    word* s;
    HASH_FIND_INT(symbol_table, &key, s);
    if (s == NULL) {
        s = (word*) malloc(sizeof(word));
        s->key = key;
        HASH_ADD_INT(symbol_table, key, s);
    }
    strcpy(s->name, name);
}

word* find_word(int word_key) {
    word* s;
    HASH_FIND_INT(symbol_table, &word_key, s);
    return s;
}

void delete_word(word* s) {
    HASH_DEL(symbol_table, s);
    free(s);
}

void delete_all() {
    word* cur_word, *tmp;
    HASH_ITER(hh, symbol_table, cur_word, tmp) {
        HASH_DEL(symbol_table, cur_word);
        free(cur_word);
    }
}

int len_st() {
    return HASH_COUNT(symbol_table);
}

void print_st() {
    int num_symbols = HASH_COUNT(symbol_table);

    if (num_symbols == 0) {
        printf("Empty symbol table.\n");
        return;
    }

    printf("Size: %u\n\n", num_symbols);

    word* cur_word, *tmp;
    HASH_ITER(hh, symbol_table, cur_word, tmp) {
        printf("KEY: %d, NAME: %s\n", cur_word->key, cur_word->name);
        HASH_DEL(symbol_table, cur_word);
        free(cur_word);
    }
}