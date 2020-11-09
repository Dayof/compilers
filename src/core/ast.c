#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ast.h"
#include "sym_tab.h"


ast_node* create_bin_expr(char* operator, ast_node* left, ast_node* right) {
    if (PARSER_VERBOSE) printf("\nCreating binary expression node: .%d. .%s. .%d.\n",
                               left->op.integer_expr, operator, right->op.integer_expr);
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = BINARY_TYPE;
    expr->op.binary_expr.operator = operator;
    expr->op.binary_expr.left = left;
    expr->op.binary_expr.right = right;
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

ast_node* create_bool_expr(int value) {
    if (PARSER_VERBOSE) printf("\n\nCreating boolean expression node: %d\n", value);
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = BOOL_TYPE;
    expr->op.integer_expr = value;
    return expr;
}

ast_node* create_str_expr(char* value) {
    if (PARSER_VERBOSE) printf("\n\nCreating string expression node: %s\n", value);
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = STR_TYPE;
    expr->op.str_expr = (char*) malloc(256);
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

void assign_var_type(ast_node* var, ast_node* expr) {
    word* var_word = find_word(var->op.variable_expr);
    if (PARSER_VERBOSE) printf("VAR: %d, %s\n", var_word->key, var_word->name);

    if (find_type(expr, STR_TYPE)) {
        if (PARSER_VERBOSE) printf("FOUND STR TYPE\n");
        var_word->type = ST_STR;
        return;
    }

    if (find_type(expr, BOOL_TYPE)) {
        if (PARSER_VERBOSE) printf("FOUND BOOL TYPE\n");
        var_word->type = ST_BOOL;
        return;
    }
    
    if (find_type(expr, FLOAT_TYPE)) {
        if (PARSER_VERBOSE) printf("FOUND FLOAT TYPE\n");
        var_word->type = ST_FLOAT;
        return;
    }
    
    if (find_type(expr, INTEGER_TYPE)) {
        if (PARSER_VERBOSE) printf("FOUND INT TYPE\n");
        var_word->type = ST_INT;
        return;
    }
    
    if (PARSER_VERBOSE) printf("Error. Type not found.\n");

    return;
}

ast_node* print_exp(ast_node* node) {
    if (PARSER_VERBOSE) {
        if (node == NULL) printf("Empty expression.\n");
        else printf("TAG: %d\n", node->tag);
    }
    return node;
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
    if (PARSER_VERBOSE) printf("TAG: %d\n", node->tag);

    for (int i=0; i < lvl; ++i) printf("  ");

    // terminal leaf
    if (node->tag == INTEGER_TYPE) {
        printf("INT: %d\n", node->op.integer_expr);
        return;
    // terminal leaf
    } else if (node->tag == STR_TYPE) {
        printf("STRING: %s\n", node->op.str_expr);
        return;
    // terminal leaf
    } else if (node->tag == BOOL_TYPE) {
        printf("BOOL: ");
        if (node->op.integer_expr) printf("True\n");
        else if (!node->op.integer_expr) printf("False\n");
        return;
    // terminal leaf
    } else if (node->tag == FLOAT_TYPE) {
        printf("FLOAT: %.2f\n", node->op.float_expr);
        return;
    // terminal leaf
    } else if (node->tag == VAR_TYPE) {
        word* var_word = find_word(node->op.variable_expr);
        printf("VAR: %s\n", var_word->name);
        return;
    // non terminal node
    } else if (node->tag == BINARY_TYPE) {
        printf("OP: %s\n", node->op.binary_expr.operator);
        print_ast(node->op.binary_expr.right, lvl+1);
        print_ast(node->op.binary_expr.left, lvl+1);
    } else {
        printf("Print AST unknown error.\n");
        return;
    }
}