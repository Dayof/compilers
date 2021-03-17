#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ast.h"
#include "sym_tab.h"


ast_node* create_empty_expr() {
    if (PARSER_VERBOSE) printf("\n\nCreating empty expression node\n");
    ast_node* expr = NULL;
    return expr;
}

ast_node* create_un_expr(char* type, char* name) {
    if (PARSER_VERBOSE) printf("\nCreating unary expression node: .%s. .%s.\n",
                               type, name);
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = UNARY_TYPE;
    int keylen;
    keylen = strlen(type) + 1;
    expr->op.unary_expr.type = (char*) malloc(keylen * sizeof(char*));
    strcpy(expr->op.unary_expr.type, type); 
    keylen = strlen(name) + 1;
    expr->op.unary_expr.name = (char*) malloc(keylen * sizeof(char*)); 
    strcpy(expr->op.unary_expr.name, name); 
    return expr;
}

ast_node* create_qua_expr(ast_node* type, ast_node* first_expr,
                          ast_node* second_expr, ast_node* third_expr) {
    if (PARSER_VERBOSE) printf("\nCreating quartenary expression node\n");
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
    if (PARSER_VERBOSE) printf("\nCreating quinary expression node\n");
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
    if (PARSER_VERBOSE) printf("\nCreating function expression node\n");
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = FUNC_TYPE;
    expr->op.quartenary_expr.type = type;
    expr->op.quartenary_expr.first_expr = first_expr; 
    expr->op.quartenary_expr.second_expr = second_expr;
    expr->op.quartenary_expr.third_expr = third_expr;
    return expr;
}

ast_node* create_bin_expr(ast_node* left, ast_node* right) {
    if (PARSER_VERBOSE) printf("\nCreating ternary expression node\n");
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = BINARY_TYPE;
    expr->op.binary_expr.left = left;
    expr->op.binary_expr.right = right;
    return expr;
}

ast_node* create_ter_expr(ast_node* left, ast_node* mid, ast_node* right) {
    if (PARSER_VERBOSE) printf("\nCreating ternary expression node\n");
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = TERNARY_TYPE;
    expr->op.ternary_expr.left = left;
    expr->op.ternary_expr.mid = mid;
    expr->op.ternary_expr.right = right;
    return expr;
}

ast_node* create_int_expr(int value) {
    if (PARSER_VERBOSE) printf("\n\nCreating integer expression node: %d\n", value);
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = INTEGER_TYPE;
    expr->op.integer_expr = value;
    return expr;
}

ast_node* create_float_expr(float value) {
    if (PARSER_VERBOSE) printf("\n\nCreating float expression node: %f\n", value);
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = FLOAT_TYPE;
    expr->op.float_expr = value;
    return expr;
}

ast_node* create_char_expr(char value) {
    if (PARSER_VERBOSE) printf("\n\nCreating char expression node: %c\n", value);
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = CHAR_TYPE;
    expr->op.char_expr = value;
    return expr;
}

ast_node* create_str_expr(char* value) {
    if (PARSER_VERBOSE) printf("\n\nCreating string expression node: %s\n", value);
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = STR_TYPE;
    int keylen;
    keylen = strlen(value) + 1;
    expr->op.str_expr = (char*) malloc(keylen * sizeof(char*));
    strcpy(expr->op.str_expr, value); 
    return expr;
}

ast_node* create_var_expr(int st_ref) {
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = VAR_TYPE;
    expr->op.variable_expr = st_ref;
    if (PARSER_VERBOSE) printf("\n\nCreating variable expression node\n");
    return expr;
}

void add_ast(ast_node* expression) {
    if (PARSER_VERBOSE) printf("\nCreating AST.\n");
    if (ast_root == NULL) {
        if (PARSER_VERBOSE) printf("First AST added.\n");
        ast_root = (ast_list*) malloc(sizeof(ast_list));
        ast_root->elem = expression;
        ast_root->next = NULL;
    } else {
        if (PARSER_VERBOSE) printf("Adding AST.\n");
        ast_list* cur_ast = ast_root;
        while (cur_ast->next != NULL) cur_ast = cur_ast->next;
        ast_list* new_ast = (ast_list*) malloc(sizeof(ast_list));
        new_ast->elem = expression;
        new_ast->next = NULL;
        cur_ast->next = new_ast;
    }
    return;
}

void create_empy_ast() {
    if (PARSER_VERBOSE) printf("\nCreating empty AST.\n");
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

    while (cur_ast != NULL) {
        printf("\n\n---- AST: %d\n\n", ast_idx + 1);
        print_ast(cur_ast->elem, 0);
        cur_ast = cur_ast->next;
        ast_idx += 1;
    }
}

void print_ast(ast_node* node, int lvl) {
    if (node == NULL) {
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("none\n");
        return;
    }

    if (PARSER_VERBOSE) {
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("LVL: %d\n", lvl);
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("TAG: %d\n", node->tag);
    }

    // terminal leaf
    if (node->tag == INTEGER_TYPE) {
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("INT: %d\n", node->op.integer_expr);
        return;
    // terminal leaf
    } else if (node->tag == CHAR_TYPE) {
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("CHAR: %c\n", node->op.char_expr);
        return;
    // terminal leaf
    } else if (node->tag == STR_TYPE) {
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("STRING: %s\n", node->op.str_expr);
        return;
    // terminal leaf
    } else if (node->tag == FLOAT_TYPE) {
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("FLOAT: %.2f\n", node->op.float_expr);
        return;
    // terminal leaf
    } else if (node->tag == VAR_TYPE) {
        word* var_word = find_word(node->op.variable_expr);
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("VAR: %s\n", var_word->name);
        return;
    // non terminal node
    } else if (node->tag == UNARY_TYPE) {
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("UNARY TYPE -----\n");
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("TYPE: %s\n", node->op.unary_expr.type);
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("NAME: %s\n", node->op.unary_expr.name);
    // non terminal node
    } else if (node->tag == BINARY_TYPE) {
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("BINARY TYPE -----\n");
        print_ast(node->op.binary_expr.left, lvl+1); 
        print_ast(node->op.binary_expr.right, lvl+1);
    // non terminal node
    } else if (node->tag == TERNARY_TYPE) {
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("TERNARY TYPE -----\n");
        print_ast(node->op.ternary_expr.left, lvl+1);
        print_ast(node->op.ternary_expr.mid, lvl+1);
        print_ast(node->op.ternary_expr.right, lvl+1);
    // non terminal node
    } else if (node->tag == QUARTENARY_TYPE) {
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("QUARTENARY TYPE -----\n");
        print_ast(node->op.quartenary_expr.type, lvl+1);
        print_ast(node->op.quartenary_expr.first_expr, lvl+1);
        print_ast(node->op.quartenary_expr.second_expr, lvl+1);
        print_ast(node->op.quartenary_expr.third_expr, lvl+1);
    // non terminal node
    } else if (node->tag == QUINARY_TYPE) {
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("QUINARY TYPE -----\n");
        print_ast(node->op.quinary_expr.type, lvl+1);
        print_ast(node->op.quinary_expr.first_expr, lvl+1);
        print_ast(node->op.quinary_expr.second_expr, lvl+1);
        print_ast(node->op.quinary_expr.third_expr, lvl+1);
        print_ast(node->op.quinary_expr.fourth_expr, lvl+1);
    // non terminal node
    } else if (node->tag == FUNC_TYPE) {
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("FUNCTION TYPE -----\n");
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("TYPE:\n");
        print_ast(node->op.quartenary_expr.type, lvl+1);
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("NAME:\n");
        print_ast(node->op.quartenary_expr.first_expr, lvl+1);
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("PARAMS:\n");
        print_ast(node->op.quartenary_expr.second_expr, lvl+1);
        for (int i=0; i < lvl; ++i) printf("  ");
        printf("STMT EXPR:\n");
        print_ast(node->op.quartenary_expr.third_expr, lvl+1);
    } else {
        printf("Print AST unknown error.\n");
        return;
    }
}
