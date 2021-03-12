#ifndef __AST_H__
#define __AST_H__

#include "main.h"

int syntax_error;

enum TAG {
    INTEGER_TYPE=0, 
    FLOAT_TYPE,
    BOOL_TYPE, 
    STR_TYPE,
    VAR_TYPE,
    BINARY_TYPE
};

typedef struct exp {
    int tag;
    union { 
        int integer_expr;
        float float_expr;
        char* str_expr;
        int variable_expr;
        struct { 
            char* operator;
            struct exp* left;
            struct exp* right;
        } binary_expr;
    } op;
} ast_node;

typedef struct exps { 
  ast_node*    elem;
  struct exps* next;
} ast_list;

ast_list* ast_root;

int len_st();
void print_asts(ast_list* root);
void print_ast(ast_node* node, int lvl);
ast_node* print_exp(ast_node* node);

void create_empy_ast();
void add_ast(ast_node* expression);
ast_node* create_int_expr(int value);
ast_node* create_float_expr(float value);
ast_node* create_var_expr(int st_ref);
ast_node* create_bool_expr(int value);
ast_node* create_str_expr(char* value);
ast_node* create_bin_expr(char* operator, ast_node* left, ast_node* right);

void assign_var_type(ast_node* var, ast_node* expr);
int find_type(ast_node* expr, int type);

#endif // __AST_H__