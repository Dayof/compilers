#ifndef __AST_H__
#define __AST_H__

int line, column;

typedef struct exp {
    union { 
        int integer_expr;
        char *string_expr;
        char *variable_expr;
        struct { 
            char *operator;
            struct exp* left;
            struct exp* right;
        } binary_expr;
      } op;
} ast_node;

typedef struct expr_list { 
    ast_node* head;
    struct expr_list* next;
} ast;

void create_ast(ast_node* expression);
ast_node* show(ast_node* expression);
ast_node* create_int_expr(int value);
ast_node* create_bin_expr(char *operator, ast_node* left, ast_node* right);

void handle_token(int token);

#endif // __AST_H__