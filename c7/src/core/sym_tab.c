#include <stdio.h>
#include "sym_tab.h"

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

int get_last_scope() {
    if (stack_root == NULL) return -1;
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
    else if (global_opt == NEW_LVL) {
        global_total_scope += 1;
        global_next_scope = global_total_scope;
    }
    else if (global_opt == RM_LVL) {
        global_total_scope -= 1;
        global_next_scope = global_total_scope;
    }
}

void pop_stack_scopes() {
    if (stack_root != NULL) {
        if (SEMANTIC_VERBOSE) {
            printf("\n\n## Scope Stack ##\n");
            print_stack();
            printf("\n\n");
        }

        int last_scope, flag;
        flag = 0;
        last_scope = get_last_scope();

        if (SEMANTIC_VERBOSE) printf("Pop all scope stack of lvl %d.\n", last_scope);

        stack_item *last_item;

        while (flag == 0) {
            if (stack_root == NULL) break;
            last_item = (stack_item*) malloc(sizeof(stack_item));
            STACK_POP(stack_root, last_item);
            if (last_item->scope_lvl == last_scope) {
                if (SEMANTIC_VERBOSE)
                    printf("Pop last_item %d of lvl %d.\n", last_item->item, last_item->scope_lvl);
                continue;
            } else {
                STACK_PUSH(stack_root, last_item);
                if (SEMANTIC_VERBOSE)
                    printf("Push last_item %d of lvl %d.\n", last_item->item, last_item->scope_lvl);
                flag = 1;
                continue;
            }
        }

        if (SEMANTIC_VERBOSE) {
            printf("\n\n## Scope Stack ##\n");
            print_stack();
            printf("\n\n");
        }
    }
}

int push_to_stack(int item) {
    int scope;

    if (stack_root == NULL) {
        global_next_scope = 0;
        scope = 0;
        if (SEMANTIC_VERBOSE) printf("Creating stack.\n");
    }
    else scope = global_next_scope;

    if (SEMANTIC_VERBOSE)
        printf("push_to_stack item %d: scope %d, global_scope %d, "
                "global_next_scope %d, global_total_scope %d, global_opt %d\n",
                item, scope, global_scope, global_next_scope, global_total_scope,
                global_opt);

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

int len_stack() {
    stack_item *tmp;
    int count;
    STACK_COUNT(stack_root, tmp, count);
    return count;
}