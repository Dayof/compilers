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

void add_word_to_sym_tab(word **symbol_table, int key, char* name,
                         int line, int col, int id_type) {
    word *current_element = (word*) malloc(sizeof(word));
    current_element->key = key;
    strcpy(current_element->name, name);
    current_element->line = line;
    current_element->col = col;
    current_element->id_type = id_type;
    HASH_ADD_STR(*symbol_table, name, current_element);
    if (SEMANTIC_VERBOSE) {
        printf("\nSymbol %s added to symbol table\n", name);
        printf("\n## Symbol Table ##\n");
        print_st_with_ref(*symbol_table);
    }
}

word* find_word(int word_key) {
    word *s;
    HASH_FIND_INT(global_symbol_table, &word_key, s);
    return s;
}

word* find_word_in_sym_tab(word* symbol_table, char *name) {
    if (SEMANTIC_VERBOSE) {
        printf("\n## Symbol Table ##\n");
        print_st_with_ref(symbol_table);
    }
    word *s;
    HASH_FIND_STR(symbol_table, name, s);
    return s;
}

void delete_word(word* s) {
    HASH_DEL(global_symbol_table, s);
    free(s);
}

void remove_symbol(int key) {
    word *word_found = find_word(key);
    HASH_DEL(global_symbol_table, word_found);
    free(word_found);
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

void print_aux_st() {
    if (HASH_COUNT(global_symbol_table) == 0) {
        printf("Empty symbol table.\n");
        return;
    }

    for (word* cur_word = global_symbol_table; cur_word != NULL;
         cur_word = cur_word->hh.next) {
        printf("KEY: %-3d | NAME: %-12s | LINE: %-3d | COLUMN: %-3d | ",
                cur_word->key, cur_word->name, cur_word->line,
                cur_word->col);
        if (cur_word->id_type == ST_ID_VAR) printf("ID TYPE: VAR");
        else if (cur_word->id_type == ST_ID_FUNC) printf("ID TYPE: FUNC");
        else if (cur_word->id_type == ST_ID_UNDEFINED) printf("ID TYPE: undefined");
        printf("\n");
    }
}

void print_st_with_ref(word *symbol_table) {
    if (HASH_COUNT(symbol_table) == 0) {
        printf("Empty symbol table.\n");
        return;
    }

    for (word* cur_word = symbol_table; cur_word != NULL;
         cur_word = cur_word->hh.next) {
        printf("KEY: %-3d | NAME: %-12s | LINE: %-3d | COLUMN: %-3d | ",
                cur_word->key, cur_word->name, cur_word->line,
                cur_word->col);
        if (cur_word->id_type == ST_ID_VAR) printf("ID TYPE: VAR");
        else if (cur_word->id_type == ST_ID_FUNC) printf("ID TYPE: FUNC");
        else if (cur_word->id_type == ST_ID_UNDEFINED) printf("ID TYPE: undefined");
        printf("\n");
    }
}
