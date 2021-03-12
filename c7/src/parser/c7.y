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
}

%token <op>             BRACK_LEFT BRACK_RIGHT PARENT_LEFT PARENT_RIGHT SEMICOLON
%token <str_value>      READ TYPE ID

%%

program : block { ; }
        ;

block   : TYPE[T] ID[F] PARENT_LEFT[L1] PARENT_RIGHT[R1] BRACK_LEFT[L2] stmts BRACK_RIGHT[R2] block  { printf("\n\nSYNTAX - %s %s %c %c %c stmts %c block",
                                                                                                       $T, $F, $L1, $R1, $L2, $R2); }
        | /* empty */   { ; }
        ; 

stmts   : stmt SEMICOLON[C] stmts   { printf("\n\nSYNTAX - stmt %c stmts", $C); }
        | /* empty */   { ; }
        ;

stmt    : READ[F] PARENT_LEFT[L] ID[C] PARENT_RIGHT[R]  { printf("\n\nSYNTAX - %s %c %s %c", $F, $L, $C, $R); }
        ;

%%

void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
