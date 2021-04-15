#include <stdio.h>
#include "sym_tab.h"

void inc_scope(int key) {
    word *s = find_word(key);
    s->scope += 1;
}

void dec_scope(int key) {
    word *s = find_word(key);
    s->scope -= 1;
}

void set_id_type(int key, int id_type) {
    word *s = find_word(key);
    s->id_type = id_type;
}

void set_scope(int key, int scope) {
    word *s = find_word(key);
    s->scope = scope;
}

int add_word(int key, char* name) {
    word *s = find_word(key);
    if (s == NULL) {
        s = (word*) malloc(sizeof *s);
        s->key = key;
        HASH_ADD_INT(symbol_table, key, s);
    }
    strcpy(s->name, name);
    s->id_type = ST_ID_UNDEFINED;
    s->scope = -1;
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
        printf("KEY: %d, NAME: %s, SCOPE: %d, ", cur_word->key, cur_word->name, cur_word->scope);
        if (cur_word->id_type == ST_ID_VAR) printf("ID TYPE: VAR");
        else if (cur_word->id_type == ST_ID_FUNC) printf("ID TYPE: FUNC");
        else if (cur_word->id_type == ST_ID_UNDEFINED) printf("ID TYPE: undefined");
        printf("\n");
    }
}

stack_item* create_stack_item(int cur_scope, int item) {
    stack_item* new_stack_item = (stack_item*) malloc(sizeof(stack_item));
    new_stack_item->item = item;
    new_stack_item->scope_lvl = cur_scope;
    new_stack_item->next = NULL;
    return new_stack_item;
}

stack_list* create_stack(int item) {
    stack_item* new_stack_item = create_stack_item(0, item);
    stack_list* new_stack_list = (stack_list*) malloc(sizeof(stack_list));
    new_stack_list->item = new_stack_item;
    new_stack_list->next = NULL;
    return new_stack_list;
}

void push_to_stack_list(int scope, int item) {
    // scope stack had already been initialized 
    if (len_stack_list() == scope + 1) {
        stack_list *cur_stack = stack_list_root;
        for (int i = 0; i < scope; ++i) cur_stack = stack_list_root->next;
        stack_item *new_stack_item = create_stack_item(scope, item);
        STACK_PUSH(cur_stack->item, new_stack_item);
    }
    // scope stack is new 
    else {
        stack_list *new_stack = create_stack(item);
        STACK_PUSH(stack_list_root, new_stack);
    }  
}

int get_last_scope() {
    int scope;
    stack_item *last_item = (stack_item*) malloc(sizeof(stack_item));
    STACK_POP(stack_root, last_item);
    scope = last_item->scope_lvl;
    STACK_PUSH(stack_root, last_item);
    return scope;
}

void update_global_refs() {
    if (global_opt == INC_LVL) global_next_scope += 1;
    else if (global_opt == DEC_LVL) global_next_scope -= 1;
    else if (global_opt == SAME_LVL) global_next_scope = global_next_scope;
    else if (global_opt == NEW_LVL) global_next_scope = global_total_scope + 1;
}

int push_to_stack(int item) {
    int scope;

    if (stack_root == NULL) {
        global_next_scope = 0;
        scope = 0;
        printf("Creating stack.\n");
    }
    else scope = global_next_scope;

    printf("push_to_stack item %d: scope %d, global_scope %d, "
           "global_next_scope %d, global_total_scope %d, global_opt %d\n",
            item, scope, global_scope, global_next_scope,
            global_total_scope, global_opt);

    stack_item *new_stack_item = create_stack_item(scope, item);
    STACK_PUSH(stack_root, new_stack_item);

    if (scope > global_total_scope) global_total_scope = scope;
    return scope;
}

void print_stack () {
    if (len_stack() == 0) {
        printf("Empty scope stack.\n");
        return;
    }

    for (stack_item* cur_item = stack_root; cur_item != NULL; cur_item = cur_item->next) {
        printf("ITEM: %d, SCOPE_LVL: %d\n", cur_item->item, cur_item->scope_lvl);
    }
}

int len_stack_list() {
    stack_list *tmp;
    int count;
    STACK_COUNT(stack_list_root, tmp, count);
    return count;
}

int len_stack() {
    stack_item *tmp;
    int count;
    STACK_COUNT(stack_root, tmp, count);
    return count;
}