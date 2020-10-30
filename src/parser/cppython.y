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
%define lr.type ielr

%start input

%union {
    int value;
    char* op;
    ast_node* expression;
}

%token <op>         ADD SUB MULT DIV
%token <value>      INTEGER
%token              NEWLINE

%left               ADD SUB
%left               MULT DIV

%type  <expression> stmt simple_stmt arith_expr term factor

%%

input   : /* empty */                   { create_empy_ast(); }
        | line
       

line    : NEWLINE                       { create_empy_ast(); }
        | stmt[U] NEWLINE               { create_ast($U); }
        | error NEWLINE                 { yyerrok; }
        ;

stmt    : simple_stmt[U]                { $$ = print_exp($U); }

simple_stmt : arith_expr[U]             { $$ = print_exp($U); }

arith_expr  : term[L] ADD term[R]       { $$ = create_bin_expr("+", $L, $R); }
            | term[L] SUB term[R]       { $$ = create_bin_expr("-", $L, $R); }
            | term[U]                   { $$ = print_exp($U); }
            ;

term    : factor[L] MULT factor[R]      { $$ = create_bin_expr("*", $L, $R); }
        | factor[L] DIV factor[R]       { $$ = create_bin_expr("/", $L, $R); }
        | factor[U]                     { $$ = print_exp($U); }
        ;

factor  : INTEGER[U]                    { $$ = create_int_expr($U); }
        ;

%%

void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
}
