#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ast.h"

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

ast_node* create_var_expr(char* value) {
    if (PARSER_VERBOSE) printf("\n\nCreating variable expression node: %s\n", value);
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->tag = VAR_TYPE;
    strcpy(expr->op.variable_expr, value);
    return expr;
}

void create_ast(ast_node* expression) {
    if (PARSER_VERBOSE) printf("\nCreating AST.\n");
    root = expression;
    return;
}

void create_empy_ast() {
    if (PARSER_VERBOSE) printf("\nCreating empty AST.\n");
    root = NULL;
    return;
}

ast_node* print_exp(ast_node* node) {
    if (PARSER_VERBOSE) {
        if (node == NULL) printf("Empty expression.\n");
        else printf("TAG: %d\n", node->tag);
    }
    return node;
}

void print_ast(ast_node* node, int lvl) {
    if (node == NULL) {
        printf("Empty AST.\n");
        return;
    }
    
    if (PARSER_VERBOSE) printf("TAG: %d\n", node->tag);

    for (int i=0; i < lvl; ++i) printf("  ");

    // terminal leaf
    if (node->tag == INTEGER_TYPE) {
        printf("INT: %d\n", node->op.integer_expr);
        return;
    // terminal leaf
    } else if (node->tag == VAR_TYPE) {
        printf("VAR: %s\n", node->op.variable_expr);
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