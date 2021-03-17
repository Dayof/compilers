%{
    #include <stdlib.h>
    #include <stdio.h>
    #include "ast.h"

    int yylex();
    void yyerror(const char *s);
%}

%output  "parser/parser.c"
%defines "parser/parser.h"
%define parse.error verbose
%define lr.type canonical-lr

%start program

%union {
    char op;
    char* str_value;
    int int_value;
    float float_value;
    ast_node* expression;
}

%token <op>             BRACK_LEFT BRACK_RIGHT PARENT_LEFT PARENT_RIGHT SEMICOLON
%token <op>             ADD SUB MULT DIV CHAR COMMA ASSIGN
%token <str_value>      READ WRITE WRITELN TYPE EMPTY STRING RETURN FORALL FOR
%token <str_value>      IN IS_SET ADD_SET REMOVE EXISTS IF ELSE NOT_OP L_OP G_OP
%token <str_value>      EQ_OP NE_OP LE_OP GE_OP OR_OP AND_OP
%token <int_value>      INTEGER ID
%token <float_value>    FLOAT

%left                   L_OP G_OP EQ_OP NE_OP LE_OP GE_OP
%left                   ADD SUB
%left                   MULT DIV

%nonassoc THEN
%nonassoc ELSE

%type  <expression>     stmt func_stmt param_list compound_block_stmt var_decl_stmt
%type  <expression>     block_stmts block_stmt simple_expr arith_expr term factor
%type  <expression>     func_cte_expr func_expr func_call simple_param_list
%type  <expression>     set_func_call set_expr

%%

program : stmts
        ;

stmts   : stmts stmt
        | stmt
        ;

stmt    : func_stmt[U] { add_ast($U); }
        | var_decl_stmt[U] { add_ast($U); }
        ;

func_stmt   : TYPE[T] ID[N] PARENT_LEFT param_list[P] PARENT_RIGHT compound_block_stmt[E] {
                $$ = create_func_expr(create_str_expr($T), create_var_expr($N), $P, $E); 
            }
            ;

var_decl_stmt   : TYPE[T] ID[N] SEMICOLON {
                    $$ = create_bin_expr(create_str_expr($T), create_var_expr($N)); 
                }
                ; 

param_list  : param_list[L] COMMA TYPE[T] ID[N] {
                $$ = create_ter_expr($L, create_str_expr($T), create_var_expr($N));
            }
            | TYPE[T] ID[N] {
                $$ = create_bin_expr(create_str_expr($T), create_var_expr($N));
            }
            | /* empty */ { $$ = create_empty_expr(); }
            ;

simple_param_list   : simple_param_list[E] COMMA ID[N] {
                        $$ = create_bin_expr($E, create_var_expr($N));
                    }
                    | ID[N] { $$ = create_var_expr($N); }
                    | /* empty */
                    ;

flex_block_struct   : compound_block_stmt
                    | block_stmt
                    ;

compound_block_stmt : BRACK_LEFT block_stmts[U] BRACK_RIGHT { $$ = $U; }
                    | BRACK_LEFT BRACK_RIGHT  { $$ = create_empty_expr(); }
                    ;

block_stmts : block_stmts[F] block_stmt[S] {
                $$ = create_bin_expr($F, $S); 
            }
            | block_stmt[U] { $$ = $U; }
            ;
    
block_stmt  : var_decl_stmt
            | func_call SEMICOLON
            | set_func_call[U] SEMICOLON { $$ = $U; }
            | flow_control
            | READ[T] PARENT_LEFT ID[N] PARENT_RIGHT SEMICOLON {
                $$ = create_bin_expr(create_str_expr($T), create_var_expr($N)); 
            }
            | WRITE[T] PARENT_LEFT simple_expr[E] PARENT_RIGHT SEMICOLON {
                $$ = create_bin_expr(create_str_expr($T), $E); 
            }
            | WRITELN[T] PARENT_LEFT simple_expr[E] PARENT_RIGHT SEMICOLON {
                $$ = create_bin_expr(create_str_expr($T), $E); 
            }
            | ID[N] ASSIGN simple_expr[E] SEMICOLON {
                $$ = create_bin_expr(create_var_expr($N), $E); 
            }
            | RETURN[T] simple_expr[E] SEMICOLON {
                $$ = create_bin_expr(create_str_expr($T), $E); 
            }
            ;

flow_control    : IF PARENT_LEFT or_cond_expr PARENT_RIGHT flex_block_struct   %prec THEN
                | IF PARENT_LEFT or_cond_expr PARENT_RIGHT flex_block_struct ELSE flex_block_struct
                | IF PARENT_LEFT or_cond_expr PARENT_RIGHT flex_block_struct ELSE IF flex_block_struct ELSE flex_block_struct
                | FORALL PARENT_LEFT set_expr PARENT_RIGHT flex_block_struct
                | FOR PARENT_LEFT opt_param opt_param PARENT_RIGHT flex_block_struct
                | FOR PARENT_LEFT opt_param opt_param for_expression PARENT_RIGHT flex_block_struct
                ;

opt_param   : SEMICOLON
            | for_expression SEMICOLON
            ;

for_expression  : decl_or_cond_expr
                | for_expression COMMA decl_or_cond_expr
                ; 

decl_or_cond_expr   : or_cond_expr
                    | TYPE ID ASSIGN simple_expr
                    | ID ASSIGN simple_expr
                    ;

or_cond_expr    : or_cond_expr OR_OP and_cond_expr
                | and_cond_expr
                ;

and_cond_expr   : and_cond_expr AND_OP unary_cond_expr
                | unary_cond_expr
                ;

unary_cond_expr : NOT_OP unary_cond_expr
                | eq_cond_expr
                ;

eq_cond_expr    : eq_cond_expr equal_ops rel_cond_expr
                | rel_cond_expr
                ;

equal_ops   : EQ_OP
            | NE_OP
            ;

rel_cond_expr   : rel_cond_expr rel_ops arith_expr
                | arith_expr
                | EMPTY
                | func_expr
                ;

rel_ops : L_OP
        | G_OP
        | LE_OP
        | GE_OP
        | IN
        ;           
    
set_expr    : simple_expr[E1] IN[M] simple_expr[E2] {
                $$ = create_ter_expr($E1, create_str_expr($M), $E2); 
            }
            ;   

func_call   : ID[N] PARENT_LEFT simple_param_list[E] PARENT_RIGHT {
                $$ = create_bin_expr(create_var_expr($N), $E); 
            }
            ;

set_func_call   : IS_SET PARENT_LEFT ID PARENT_RIGHT
                | ADD_SET[T] PARENT_LEFT set_expr[E] PARENT_RIGHT {
                    $$ = create_bin_expr(create_str_expr($T), $E); 
                }
                | REMOVE PARENT_LEFT set_expr PARENT_RIGHT
                | EXISTS PARENT_LEFT set_expr PARENT_RIGHT
                ;

simple_expr : arith_expr[U] { $$ = $U; }
            | func_cte_expr[U] { $$ = $U; }
            ;

func_cte_expr   : EMPTY[U] { $$ = create_str_expr($U); }
                | STRING[U] { $$ = create_str_expr($U); }
                | CHAR[U] { $$ = create_char_expr($U); }
                | func_expr[U] { $$ = $U; }
                ;

func_expr       : func_call[U] { $$ = $U; }
                | set_func_call
                | PARENT_LEFT func_cte_expr PARENT_RIGHT
                ;

arith_expr  : arith_expr[L] ADD[M] term[R] { $$ = create_ter_expr($L, create_char_expr($M), $R); }
            | arith_expr[L] SUB[M] term[R] { $$ = create_ter_expr($L, create_char_expr($M), $R); }
            | term[U]  { $$ = $U; }
            ;

term    : term[L] MULT[M] factor[R] { $$ = create_ter_expr($L, create_char_expr($M), $R); }
        | term[L] DIV[M] factor[R] { $$ = create_ter_expr($L, create_char_expr($M), $R); }
        | factor[U] { $$ = $U; }
        ;

factor  : INTEGER[U] { $$ = create_int_expr($U); }
        | FLOAT[U] { $$ = create_float_expr($U); }
        | ID[U] { $$ = create_var_expr($U); }
        | PARENT_LEFT arith_expr PARENT_RIGHT
        ;

%%

void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
