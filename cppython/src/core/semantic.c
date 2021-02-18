#include "semantic.h"

int find_type(ast_node* expr, int type) {
    if (expr->tag == type) return 1;
    else if (expr->tag == BINARY_TYPE) {
        if (find_type(expr->op.binary_expr.left, type)) return 1;
        if (find_type(expr->op.binary_expr.right, type)) return 1;
    }
    return 0;
}