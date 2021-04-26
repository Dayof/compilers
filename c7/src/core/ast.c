#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ast.h"

ast_node* create_empty_expr() {
    if (PARSER_VERBOSE) printf("\n\n[AST] Creating empty expression node\n");
    ast_node* expr = NULL;
    return expr;
}

ast_node* create_qua_expr(ast_node* type, ast_node* first_expr,
                          ast_node* second_expr, ast_node* third_expr) {
    if (PARSER_VERBOSE) printf("[AST] Creating quartenary expression node\n");
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = QUARTENARY_TYPE;
    expr->op.quinary_expr.type = type;
    expr->op.quinary_expr.first_expr = first_expr; 
    expr->op.quinary_expr.second_expr = second_expr;
    expr->op.quinary_expr.third_expr = third_expr;
    return expr;
}

ast_node* create_qui_expr(ast_node* type, ast_node* first_expr,
                          ast_node* second_expr, ast_node* third_expr,
                          ast_node* fourth_expr) {
    if (PARSER_VERBOSE) printf("[AST] Creating quinary expression node\n");
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = QUINARY_TYPE;
    expr->op.quinary_expr.type = type;
    expr->op.quinary_expr.first_expr = first_expr; 
    expr->op.quinary_expr.second_expr = second_expr;
    expr->op.quinary_expr.third_expr = third_expr;
    expr->op.quinary_expr.fourth_expr = fourth_expr;
    return expr;
}

ast_node* create_func_expr(ast_node* type, ast_node* first_expr,
                           ast_node* second_expr, ast_node* third_expr) {
    if (PARSER_VERBOSE) printf("[AST] Creating function expression node\n");
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = FUNC_TYPE;
    expr->op.quartenary_expr.type = type;
    expr->op.quartenary_expr.first_expr = first_expr; 
    expr->op.quartenary_expr.second_expr = second_expr;
    expr->op.quartenary_expr.third_expr = third_expr;
    return expr;
}

ast_node* create_bin_expr(ast_node* left, ast_node* right) {
    if (PARSER_VERBOSE) printf("[AST] Creating ternary expression node\n");
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = BINARY_TYPE;
    expr->op.binary_expr.left = left;
    expr->op.binary_expr.right = right;
    return expr;
}

ast_node* create_ter_expr(ast_node* left, ast_node* mid, ast_node* right) {
    if (PARSER_VERBOSE) printf("[AST] Creating ternary expression node\n");
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = TERNARY_TYPE;
    expr->op.ternary_expr.left = left;
    expr->op.ternary_expr.mid = mid;
    expr->op.ternary_expr.right = right;
    return expr;
}

ast_node* create_int_expr(int value) {
    if (PARSER_VERBOSE) printf("[AST] Creating integer expression node: %d\n", value);
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = INTEGER_TYPE;
    expr->op.integer_expr = value;
    return expr;
}

ast_node* create_float_expr(float value) {
    if (PARSER_VERBOSE) printf("[AST] Creating float expression node: %f\n", value);
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = FLOAT_TYPE;
    expr->op.float_expr = value;
    return expr;
}

ast_node* create_char_expr(char value) {
    if (PARSER_VERBOSE) printf("[AST] Creating char expression node: .%c.\n", value);
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = CHAR_TYPE;
    expr->op.char_expr = value;
    return expr;
}

ast_node* create_str_expr(char* value) {
    if (PARSER_VERBOSE) printf("[AST] Creating string expression node: .%s.\n", value);
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = STR_TYPE;
    int keylen;
    keylen = strlen(value) + 1;
    expr->op.str_expr = (char*) malloc(keylen * sizeof(char*));
    strcpy(expr->op.str_expr, value);
    return expr;
}

ast_node* create_var_expr(int st_ref) {
    word *sym_found = find_word(st_ref);
    if (PARSER_VERBOSE)
        printf("[AST] Creating variable '%s', key %d, type %s expression node\n",
                sym_found->name, sym_found->key, datatype2str(sym_found->data_type));
    ast_node *expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = VAR_TYPE;
    expr->op.variable_expr = st_ref;
    return expr;
}

ast_node* create_type_cast_expr(char *cast_name, ast_node* expression) {
    if (PARSER_VERBOSE)
        printf("[AST] Creating type cast expression node: '%s'\n", cast_name);
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = CAST_TYPE;
    int keylen;
    keylen = strlen(cast_name) + 1;
    expr->op.cast_expr.str_expr = (char*) malloc(keylen * sizeof(char*));
    strcpy(expr->op.cast_expr.str_expr, cast_name);
    expr->op.cast_expr.next = expression;
    return expr;
}

void add_ast(ast_node* expression) {
    if (PARSER_VERBOSE) printf("[AST] Creating AST.\n");
    if (ast_root == NULL) {
        if (PARSER_VERBOSE) printf("[AST] First AST added.\n");
        ast_root = (ast_list*) malloc(sizeof(ast_list));
        ast_root->elem = expression;
        ast_root->next = NULL;
    } else {
        if (PARSER_VERBOSE) printf("[AST] Adding AST.\n");
        ast_list* cur_ast = ast_root;
        while (cur_ast->next != NULL) cur_ast = cur_ast->next;
        ast_list* new_ast = (ast_list*) malloc(sizeof(ast_list));
        new_ast->elem = expression;
        new_ast->next = NULL;
        cur_ast->next = new_ast;
    }
    return;
}

void delete_all_ast() {
    ast_list* cur_ast = ast_root;
    while (cur_ast) {
        ast_list* tmp_cur_ast = cur_ast;
        deallocate_node(tmp_cur_ast->elem);
        cur_ast = tmp_cur_ast->next;
        free(tmp_cur_ast);
    }
    free(cur_ast);
}

void deallocate_node(ast_node* elem) {
    if (elem == NULL) return;

    if (elem->tag == STR_TYPE) {
        free(elem->op.str_expr);
    } else if (elem->tag == CAST_TYPE) {
        free(elem->op.cast_expr.str_expr);
        deallocate_node(elem->op.cast_expr.next);
    } else if (elem->tag == BINARY_TYPE) {
        deallocate_node(elem->op.binary_expr.left);
        deallocate_node(elem->op.binary_expr.right);
    } else if (elem->tag == TERNARY_TYPE) {
        deallocate_node(elem->op.ternary_expr.left);
        deallocate_node(elem->op.ternary_expr.mid);
        deallocate_node(elem->op.ternary_expr.right);
    } else if (elem->tag == QUINARY_TYPE) {
        deallocate_node(elem->op.quinary_expr.type);
        deallocate_node(elem->op.quinary_expr.first_expr);
        deallocate_node(elem->op.quinary_expr.second_expr);
        deallocate_node(elem->op.quinary_expr.third_expr);
        deallocate_node(elem->op.quinary_expr.fourth_expr);
    } else if (elem->tag == FUNC_TYPE || elem->tag == QUARTENARY_TYPE) {
        deallocate_node(elem->op.quartenary_expr.type);
        deallocate_node(elem->op.quartenary_expr.first_expr);
        deallocate_node(elem->op.quartenary_expr.second_expr);
        deallocate_node(elem->op.quartenary_expr.third_expr);
    }

    free(elem);
}

void create_empy_ast() {
    if (PARSER_VERBOSE) printf("[AST] Creating empty AST.\n");
    ast_root = NULL;
    return;
}

void print_asts(ast_list* root) {
    if (root == NULL) {
        printf("\nEmpty AST.\n");
        return;
    }

    ast_list* cur_ast = root;
    int ast_idx = 0;

    if (PARSER_VERBOSE) printf("LVL: 0\n");
    printf("\n\n");
    while (cur_ast != NULL) {
        if (PARSER_VERBOSE) printf("\n\n---- AST: %d\n", ast_idx + 1);
        print_ast(cur_ast->elem, 1);
        cur_ast = cur_ast->next;
        ast_idx += 1;
    }

    free(cur_ast);
}

void print_ast(ast_node* node, int lvl) {
    if (node == NULL) {
        if (PARSER_VERBOSE) {
            for (int i=0; i < lvl; ++i) printf("-");
            printf("none\n");
        }
        return;
    }

    if (PARSER_VERBOSE) {
        for (int i=0; i < lvl; ++i) printf("-");
        printf("LVL: %d\n", lvl);
        for (int i=0; i < lvl; ++i) printf("-");
        printf("TAG: %d\n", node->tag);
    }

    // terminal leaf
    if (node->tag == INTEGER_TYPE) {
        if (PARSER_VERBOSE) {
            for (int i=0; i < lvl; ++i) printf("-");
            printf("INT TYPE -----\n");
        }
        for (int i=0; i < lvl; ++i) printf("-");
        printf("| E.lexval: %d\n", node->op.integer_expr);
        return;
    // terminal leaf
    } else if (node->tag == CAST_TYPE) {
        if (PARSER_VERBOSE) {
            for (int i=0; i < lvl; ++i) printf("-");
            printf("CAST TYPE -----\n");
        }
        for (int i=0; i < lvl; ++i) printf("-");
        printf("| E.lexval: %s\n", node->op.cast_expr.str_expr);
        print_ast(node->op.cast_expr.next, lvl+1); 
        return;
    // terminal leaf
    } else if (node->tag == CHAR_TYPE) {
        if (PARSER_VERBOSE) {
            for (int i=0; i < lvl; ++i) printf("-");
            printf("CHAR TYPE -----\n");
        }
        for (int i=0; i < lvl; ++i) printf("-");
        printf("| E.op: %c\n", node->op.char_expr);
        return;
    // terminal leaf
    } else if (node->tag == STR_TYPE) {
        if (PARSER_VERBOSE) {
            for (int i=0; i < lvl; ++i) printf("-");
            printf("STR TYPE -----\n");
        }
        for (int i=0; i < lvl; ++i) printf("-");
        printf("| E.op: %s\n", node->op.str_expr);
        return;
    // terminal leaf
    } else if (node->tag == FLOAT_TYPE) {
        if (PARSER_VERBOSE) {
            for (int i=0; i < lvl; ++i) printf("-");
            printf("FLOAT TYPE -----\n");
        }
        for (int i=0; i < lvl; ++i) printf("-");
        printf("| E.lexval: %.2f\n", node->op.float_expr);
        return;
    // terminal leaf
    } else if (node->tag == VAR_TYPE) {
        if (PARSER_VERBOSE) {
            for (int i=0; i < lvl; ++i) printf("-");
            printf("VAR TYPE -----\n");
        }
        word* var_word = find_word(node->op.variable_expr);
        for (int i=0; i < lvl; ++i) printf("-");
        printf("| E.lexval: %s, E.type: %s",
               var_word->name, datatype2str(var_word->data_type));
        if (var_word->tag == ET_SOFT_DELETE) printf(", deleted"); 
        printf("\n"); 
        return;
    // non terminal node
    } else if (node->tag == BINARY_TYPE) {
        if (PARSER_VERBOSE) {
            for (int i=0; i < lvl; ++i) printf("-");
            printf("BINARY TYPE -----\n");
        }
        print_ast(node->op.binary_expr.left, lvl+1); 
        print_ast(node->op.binary_expr.right, lvl+1);
        printf("\n");
    // non terminal node
    } else if (node->tag == TERNARY_TYPE) {
        if (PARSER_VERBOSE) {
            for (int i=0; i < lvl; ++i) printf("-");
            printf("TERNARY TYPE -----\n");
        }
        print_ast(node->op.ternary_expr.left, lvl+1);
        print_ast(node->op.ternary_expr.mid, lvl+1);
        print_ast(node->op.ternary_expr.right, lvl+1);
        printf("\n");
    // non terminal node
    } else if (node->tag == QUARTENARY_TYPE) {
        if (PARSER_VERBOSE) {
            for (int i=0; i < lvl; ++i) printf("-");
            printf("QUARTENARY TYPE -----\n");
        }
        print_ast(node->op.quartenary_expr.type, lvl+1);
        print_ast(node->op.quartenary_expr.first_expr, lvl+1);
        print_ast(node->op.quartenary_expr.second_expr, lvl+1);
        print_ast(node->op.quartenary_expr.third_expr, lvl+1);
    // non terminal node
    } else if (node->tag == QUINARY_TYPE) {
        if (PARSER_VERBOSE) {
            for (int i=0; i < lvl; ++i) printf("-");
            printf("QUINARY TYPE -----\n");
        }
        print_ast(node->op.quinary_expr.type, lvl+1);
        print_ast(node->op.quinary_expr.first_expr, lvl+1);
        print_ast(node->op.quinary_expr.second_expr, lvl+1);
        print_ast(node->op.quinary_expr.third_expr, lvl+1);
        print_ast(node->op.quinary_expr.fourth_expr, lvl+1);
    // non terminal node
    } else if (node->tag == FUNC_TYPE) {
        for (int i=0; i < lvl; ++i) printf("-");
        printf("FUNCTION\n");
        for (int i=0; i < lvl; ++i) printf("-");
        printf("TYPE:");
        print_ast(node->op.quartenary_expr.type, lvl+1);
        for (int i=0; i < lvl; ++i) printf("-");
        printf("NAME:");
        print_ast(node->op.quartenary_expr.first_expr, lvl+1);
        for (int i=0; i < lvl; ++i) printf("-");
        printf("PARAMETERS:\n");
        print_ast(node->op.quartenary_expr.second_expr, lvl+1);
        for (int i=0; i < lvl; ++i) printf("-");
        printf("STATEMENTS:\n");
        print_ast(node->op.quartenary_expr.third_expr, lvl+1);
    } else {
        printf("Print AST unknown error.\n");
        return;
    }
}
