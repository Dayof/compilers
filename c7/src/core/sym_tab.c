#include <stdio.h>
#include "sym_tab.h"


void set_id_type(int key, int id_type) {
    word *s = find_word(key);
    s->id_type = id_type;
}

int add_word(int key, char* name) {
    word *s = find_word(key);
    if (s == NULL) {
        s = (word*) malloc(sizeof *s);
        s->key = key;
        HASH_ADD_INT(symbol_table, key, s);
    }
    strcpy(s->name, name);
    return key;
}

word* find_word(int word_key) {
    word *s;
    HASH_FIND_INT(symbol_table, &word_key, s);
    return s;
}

void delete_word(word* s) {
    HASH_DEL(symbol_table, s);
    free(s);
}

void delete_all_st() {
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
    if (HASH_COUNT(symbol_table) == 0) {
        printf("Empty symbol table.\n");
        return;
    }

    for (word* cur_word = symbol_table; cur_word != NULL; cur_word = cur_word->hh.next) {
        printf("KEY: %d, NAME: %s, ID TYPE: %s",
                cur_word->key, cur_word->name, cur_word->id_type ? "VAR" : "FUNC");
        printf("\n");
    }
}