#include <stdio.h>
#include "sym_tab.h"

void set_id_type(int key, int id_type) {
    word *s = find_word(key);
    s->id_type = id_type;
}

word* new_symbol_table() {
    word *new_symt = NULL;
    return new_symt;
}

int add_word(int key, char* name, int line, int col) {
    word *s = find_word(key);
    if (s == NULL) {
        s = (word*) malloc(sizeof *s);
        s->key = key;
        HASH_ADD_INT(global_symbol_table, key, s);
    }
    strcpy(s->name, name);
    s->id_type = ST_ID_UNDEFINED;
    s->line = line;
    s->col = col;
    return key;
}

void add_word_to_sym_tab(word* symbol_table, int key, char* name,
                         int line, int col, int id_type) {
    word *cur_element = (word*) malloc(sizeof(word));
    cur_element->key = key;
    strcpy(cur_element->name, name);
    cur_element->line = line;
    cur_element->col = col;
    cur_element->id_type = id_type;
    HASH_ADD_INT(symbol_table, name, cur_element);
    if (SEMANTIC_VERBOSE) printf("\nSymbol %s added to symbol table\n", name);
}

word* find_word(int word_key) {
    word *s;
    HASH_FIND_INT(global_symbol_table, &word_key, s);
    return s;
}

void delete_word(word* s) {
    HASH_DEL(global_symbol_table, s);
    free(s);
}

void delete_all_st() {
    word* cur_word, *tmp;
    HASH_ITER(hh, global_symbol_table, cur_word, tmp) {
        HASH_DEL(global_symbol_table, cur_word);
        free(cur_word);
    }
}

int len_st() {
    return HASH_COUNT(global_symbol_table);
}

void print_st() {
    if (HASH_COUNT(global_symbol_table) == 0) {
        printf("Empty symbol table.\n");
        return;
    }

    for (word* cur_word = global_symbol_table; cur_word != NULL;
         cur_word = cur_word->hh.next) {
        printf("KEY: %d, NAME: %s, ", cur_word->key, cur_word->name);
        if (cur_word->id_type == ST_ID_VAR) printf("ID TYPE: VAR");
        else if (cur_word->id_type == ST_ID_FUNC) printf("ID TYPE: FUNC");
        else if (cur_word->id_type == ST_ID_UNDEFINED) printf("ID TYPE: undefined");
        printf("\n");
    }
}
