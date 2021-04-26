#ifndef __AST_H__
#define __AST_H__

#include "sym_tab.h"
#include "main.h"

enum TAG {
    INTEGER_TYPE=0, 
    FLOAT_TYPE,
    CHAR_TYPE,
    STR_TYPE,
    VAR_TYPE,
    BINARY_TYPE,
    TERNARY_TYPE,
    QUARTENARY_TYPE,
    QUINARY_TYPE,
    FUNC_TYPE,
    CAST_TYPE
};

typedef struct exp {
    int tag;
    union { 
        int integer_expr;
        int variable_expr;
        float float_expr;
        char char_expr;
        char* str_expr;
        struct { 
            struct exp* left;
            struct exp* right;
        } binary_expr;
        struct { 
            struct exp* left;
            struct exp* mid;
            struct exp* right;
        } ternary_expr;
        struct { 
            struct exp* type;
            struct exp* first_expr;
            struct exp* second_expr;
            struct exp* third_expr;
        } quartenary_expr;
        struct { 
            struct exp* type;
            struct exp* first_expr;
            struct exp* second_expr;
            struct exp* third_expr;
            struct exp* fourth_expr;
        } quinary_expr;
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

void create_empy_ast();
ast_node* create_empty_expr();
void add_ast(ast_node* expression);
void delete_all_ast();
void deallocate_node(ast_node* elem);
ast_node* create_int_expr(int value);
ast_node* create_float_expr(float value);
ast_node* create_var_expr(int st_ref);
ast_node* create_char_expr(char value);
ast_node* create_str_expr(char* value);
ast_node* create_bin_expr(ast_node* left, ast_node* right);
ast_node* create_ter_expr(ast_node* left, ast_node* mid, ast_node* right);
ast_node* create_func_expr(ast_node* type, ast_node* first_expr,
                           ast_node* second_expr, ast_node* third_expr);
ast_node* create_qua_expr(ast_node* type, ast_node* first_expr,
                          ast_node* second_expr, ast_node* third_expr);
ast_node* create_qui_expr(ast_node* type, ast_node* first_expr,
                          ast_node* second_expr, ast_node* third_expr,
                          ast_node* fourth_expr);

#endif // __AST_H__