#include <stdio.h>
#include "sym_tab.h"

void set_id_type(int key, int id_type) {
    word *s = find_word(key);
    s->id_type = id_type;
}

void set_scope(word *symbol, int scope_lvl, char *scope_name) {
    symbol->scope_lvl = scope_lvl;
    strcpy(symbol->scope_name, scope_name);
}

void set_existance_tag(int key, int tag) {
    word *global_sym_table = find_word(key);
    global_sym_table->tag = tag;
}

void set_arity(int key, int arity) {
    word *global_sym_table = find_word(key);
    if (SEMANTIC_VERBOSE)
        printf("[SYM_TAB] Setting arity %d for symbol %s.\n",
               arity, global_sym_table->name);
    global_sym_table->arity = arity;
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
    s->scope_lvl = -1;
    s->tag = ET_OK;
    s->arity = -1;
    strcpy(s->scope_name, "undefined");
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
        printf("[SYM_TAB] Symbol %s added to symbol table\n", name);
        printf("\n## Symbol Table ##\n\n");
        print_st_with_ref(*symbol_table);
        printf("\n");
    }
}

word* find_word(int word_key) {
    word *s;
    HASH_FIND_INT(global_symbol_table, &word_key, s);
    return s;
}

word* find_word_in_sym_tab(word* symbol_table, char *name) {
    if (SEMANTIC_VERBOSE) {
        printf("\n## Symbol Table ##\n\n");
        print_st_with_ref(symbol_table);
        printf("\n");
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
        printf("[SCOPE] Deleting symbol table %s.\n", cur_word->name);
        HASH_DEL(global_symbol_table, cur_word);
        free(cur_word);
    }
}

void delete_st_with_ref(word *symbol_table) {
    if (SEMANTIC_VERBOSE) printf("[SCOPE] Deleting symbol table.\n");
    if (HASH_COUNT(symbol_table) != 0) {
        word* cur_word, *tmp;
        HASH_ITER(hh, symbol_table, cur_word, tmp) {
            printf("[SCOPE] Deleting symbol table %s.\n", cur_word->name);
            HASH_DEL(symbol_table, cur_word);
            free(cur_word);
        }
    } else
        if (SEMANTIC_VERBOSE) printf("[SCOPE] Symbol table already empty.\n");
}

int len_st() {
    return HASH_COUNT(global_symbol_table);
}

void print_aux_st() {
    if (HASH_COUNT(global_symbol_table) == 0) {
        printf("Empty symbol table.\n");
        return;
    }

    printf("LVL | SCOPE        | NAME         | LINE | COL  | TYPE   | ARITY |\n"
           "------------------------------------------------------------------\n");
    for (word* cur_word = global_symbol_table; cur_word != NULL;
         cur_word = cur_word->hh.next) {
        if (cur_word->tag == ET_SOFT_DELETE ||
            cur_word->tag == ET_REF ||
            cur_word->scope_lvl == -1) continue;
        printf("%-3d | %-12s | %-12s | %-4d | %-4d |",
                cur_word->scope_lvl, cur_word->scope_name, cur_word->name,
                cur_word->line, cur_word->col);
        if (cur_word->id_type == ST_ID_VAR)
            printf(" %-6s | %-5s |\n", "VAR", "x");
        else if (cur_word->id_type == ST_ID_FUNC)
            printf(" %-6s | %-5d |\n", "FUNC", cur_word->arity);
        else if (cur_word->id_type == ST_ID_UNDEFINED)
            printf(" %-6s | %-5s |\n", "UNDEF", "x");
    }
}

void print_st_with_ref(word *symbol_table) {
    if (HASH_COUNT(symbol_table) == 0) {
        printf("Empty symbol table.\n");
        return;
    }

    char exist_tag[5] = "";

    printf("KEY | TAG | NAME         | LINE | COL  | TYPE   | ARITY |\n"
           "---------------------------------------------------------\n");
    for (word* cur_word = symbol_table; cur_word != NULL;
         cur_word = cur_word->hh.next) {
        printf("%-3d | ", cur_word->key); 
        if (cur_word->tag == ET_OK) strcpy(exist_tag, "OK");
        else if (cur_word->tag == ET_SOFT_DELETE) strcpy(exist_tag, "DEL");
        else if (cur_word->tag == ET_REF) strcpy(exist_tag, "REF");

        printf("%-3s | %-12s | %-4d | %-4d |", exist_tag, cur_word->name,
                cur_word->line, cur_word->col);

        if (cur_word->id_type == ST_ID_VAR)
            printf(" %-6s | %-5s |\n", "VAR", "x");
        else if (cur_word->id_type == ST_ID_FUNC)
            printf(" %-6s | %-5d |\n", "FUNC", cur_word->arity);
        else if (cur_word->id_type == ST_ID_UNDEFINED)
            printf(" %-6s | %-5s |\n", "UNDEF", "x");
    }
}
