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
    int int_value, st_ref;
    float float_value;
    char op;
    char* str_value;
    ast_node* expression;
}

%token <op>             ADD SUB MULT DIV ASSIGN
%token <str_value>      STRING
%token <int_value>      INTEGER BOOLEAN
%token <float_value>    FLOAT
%token <st_ref>         ID
%token                  NEWLINE

%left                   ASSIGN
%left                   ADD SUB
%left                   MULT DIV

%type  <expression>     stmt simple_stmt var expr arith_expr term factor

%%

input   : /* empty */                       { create_empy_ast(); }
        | input line                        { ; }
        ;

line    : NEWLINE                           { ; }
        | stmt[U] NEWLINE                   { add_ast($U); }
        | error NEWLINE                     { yyerrok; }
        ;

stmt    : simple_stmt[U]                    { $$ = print_exp($U); }
        ;

simple_stmt : var[L] ASSIGN expr[R]         { 
                                                $$ = create_bin_expr("=", $L, $R);
                                                assign_var_type($L, $R);
                                            }
            ;

var     : ID[U]                             { $$ = create_var_expr($U); }
        ;

expr    : arith_expr[U]                     { $$ = print_exp($U); }
        | BOOLEAN[U]                        { $$ = create_bool_expr($U); }
        | STRING[U]                         { $$ = create_str_expr($U); }
        ;

arith_expr  : arith_expr[L] ADD term[R]     { $$ = create_bin_expr("+", $L, $R); }
            | arith_expr[L] SUB term[R]     { $$ = create_bin_expr("-", $L, $R); }
            | term[U]                       { $$ = print_exp($U); }
            ;

term    : term[L] MULT factor[R]            { $$ = create_bin_expr("*", $L, $R); }
        | term[L] DIV factor[R]             { $$ = create_bin_expr("/", $L, $R); }
        | factor[U]                         { $$ = print_exp($U); }
        ;

factor  : INTEGER[U]                        { $$ = create_int_expr($U); }
        | FLOAT[U]                          { $$ = create_float_expr($U); }
        ;

%%

void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
