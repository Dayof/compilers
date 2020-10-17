%{
    #include <stdio.h>
    #include "ast.h"

    int yylex();
    void yyerror(char *s);
%}

%output  "parser.c"
%defines "parser.h"
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

input   : /* empty */
        | expr                         { create_ast($1); }
        ;

expr    : term[L] ADD[C] term[R]       { $$ = create_bin_expr($C, $L, $R); }
        | term[L] SUB[C] term[R]       { $$ = create_bin_expr($C, $L, $R); }
        | term[U]                      { $$ = show($U); }
		;

term    : factor[L] MULT[C] factor[R]  { $$ = create_bin_expr($C, $L, $R); }
        | factor[L] DIV[C] factor[R]   { $$ = create_bin_expr($C, $L, $R); }
        | factor[U]                    { $$ = show($U); }
        ;

factor  : INTEGER[U]                   { $$ = create_int_expr($U); }
        ;

%%

void yyerror(char *s) {
    printf("%s\n", s);
}
