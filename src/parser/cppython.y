%{
    #include <stdio.h>
    #include "ast.h"

    int yylex();
    void yyerror(char *s);
%}

%output  "parser/parser.c"
%defines "parser/parser.h"
%define lr.type ielr

%start input

%union {
    int value;
    char* op;
    ast_node* expression;
}

%token <op>         ADD SUB MULT DIV
%token <value>      INTEGER

%left               ADD SUB
%left               MULT DIV

%type  <expression> expr term factor

%%

input   : /* empty */                  { create_empy_ast(); }
        | expr                         { create_ast($1); }
        ;

expr    : term[L] ADD term[R]       { $$ = create_bin_expr("+", $L, $R); }
        | term[L] SUB term[R]       { $$ = create_bin_expr("-", $L, $R); }
        | term[U]                   { $$ = print_exp($U); }
		;

term    : factor[L] MULT factor[R]  { $$ = create_bin_expr("*", $L, $R); }
        | factor[L] DIV factor[R]   { $$ = create_bin_expr("/", $L, $R); }
        | factor[U]                 { $$ = print_exp($U); }
        ;

factor  : INTEGER[U]                { $$ = create_int_expr($U); }
        ;

%%

void yyerror(char *s) {
    printf("%s\n", s);
}
