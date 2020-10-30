#ifndef __AST_H__
#define __AST_H__

int LEX_VERBOSE, PARSER_VERBOSE, MAIN_VERBOSE;
int lex_line, lex_column, parser_line, parser_column;

enum TAG {
    INTEGER_TYPE=0, 
    VAR_TYPE,
    BINARY_TYPE
};

typedef struct exp {
    int tag;
    union { 
        int integer_expr;
        char variable_expr[79];
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
ast_node* create_var_expr(char* value);
ast_node* create_bin_expr(char* operator, ast_node* left, ast_node* right);

void handle_token(int token);

#endif // __AST_H__