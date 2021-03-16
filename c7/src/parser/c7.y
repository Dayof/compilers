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
}

%token <op>             BRACK_LEFT BRACK_RIGHT PARENT_LEFT PARENT_RIGHT SEMICOLON ADD SUB MULT DIV CHAR COMMA ASSIGN
%token <str_value>      READ WRITE WRITELN TYPE ID EMPTY STRING RETURN FORALL IN IS_SET ADD_SET REMOVE EXISTS IF ELSE NOT_OP L_OP G_OP EQ_OP NE_OP LE_OP GE_OP OR_OP AND_OP
%token <int_value>      INTEGER
%token <float_value>    FLOAT

%left                   L_OP G_OP EQ_OP NE_OP LE_OP GE_OP
%left                   ADD SUB
%left                   MULT DIV

%nonassoc THEN
%nonassoc ELSE

%%

program : stmts
        ;

stmts   : stmts stmt
        | stmt
        ;

stmt    : func_stmt
        | var_decl_stmt
        ;

func_stmt   : TYPE ID PARENT_LEFT param_list PARENT_RIGHT compound_block_stmt
            ;

var_decl_stmt   : TYPE ID SEMICOLON
                ; 

param_list  : param_list COMMA TYPE ID
            | TYPE ID
            | /* empty */
            ;

simple_param_list   : simple_param_list COMMA ID
                    | ID
                    | /* empty */
                    ;

flex_block_struct   : compound_block_stmt
                    | block_stmt
                    ;

compound_block_stmt : BRACK_LEFT block_stmts BRACK_RIGHT
                    | BRACK_LEFT BRACK_RIGHT
                    ;

block_stmts : block_stmts block_stmt
            | block_stmt
            ;
    
block_stmt  : var_decl_stmt
            | func_call SEMICOLON
            | set_func_call SEMICOLON
            | flow_control
            | READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON
            | WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON
            | WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON
            | ID ASSIGN simple_expr SEMICOLON
            | RETURN simple_expr SEMICOLON
            ;

flow_control    : IF PARENT_LEFT or_cond_expr PARENT_RIGHT flex_block_struct   %prec THEN
                | IF PARENT_LEFT or_cond_expr PARENT_RIGHT flex_block_struct ELSE flex_block_struct
                | IF PARENT_LEFT or_cond_expr PARENT_RIGHT flex_block_struct ELSE IF flex_block_struct ELSE flex_block_struct
                | FORALL[O] PARENT_LEFT[L] set_expr PARENT_RIGHT[R] flex_block_struct
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

 rel_ops    : L_OP
            | G_OP
            | LE_OP
            | GE_OP
            | IN
            ;           
    
set_expr    : simple_expr IN simple_expr
            ;   

func_call   : ID PARENT_LEFT simple_param_list PARENT_RIGHT
            ;

set_func_call   : IS_SET PARENT_LEFT ID PARENT_RIGHT
                | ADD_SET PARENT_LEFT set_expr PARENT_RIGHT
                | REMOVE PARENT_LEFT set_expr PARENT_RIGHT
                | EXISTS PARENT_LEFT set_expr PARENT_RIGHT
                ;

simple_expr : arith_expr
            | func_cte_expr
            ;

func_cte_expr   : EMPTY
                | STRING
                | CHAR
                | func_expr
                ;

func_expr       : func_call
                | set_func_call
                | PARENT_LEFT func_cte_expr PARENT_RIGHT
                ;

arith_expr  : arith_expr ADD term
            | arith_expr SUB term
            | term
            ;

term    : term MULT factor
        | term DIV factor
        | factor
        ;

factor  : INTEGER
        | FLOAT
        | ID
        | PARENT_LEFT arith_expr PARENT_RIGHT
        ;

%%

void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
