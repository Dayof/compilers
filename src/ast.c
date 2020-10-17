#include <stdio.h>
#include <stdlib.h>
#include "ast.h"

ast_node* create_bin_expr(char *operator, ast_node* left, ast_node* right) {
    printf("\nCreating binary expression node: %d %s %d\n",
           left->op.integer_expr, operator, right->op.integer_expr);
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->op.binary_expr.operator = operator;
    expr->op.binary_expr.left = left;
    expr->op.binary_expr.right = right;
    return expr;
}

ast_node* create_int_expr(int value) {
    printf("\n\nCreating integer expression node: %d\n", value);
    ast_node* expr = (ast_node*) malloc(sizeof(ast_node));
    expr->op.integer_expr = value;
    return expr;
}

void create_ast(ast_node* expression) {
    ast* ast_obj = (ast*) malloc(sizeof(ast));
    ast_obj->head = expression;
    ast_obj->next = NULL;
    printf("\nAST created.\n");
}

ast_node* show(ast_node* expression) {
    printf("\nAssign expression.\n");
    return expression;
}