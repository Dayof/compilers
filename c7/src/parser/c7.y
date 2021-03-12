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
}

%token <op>     BRACK_LEFT BRACK_RIGHT

%%

program : block                         { ; }
        ;

block   : BRACK_LEFT[L] stmts BRACK_RIGHT[R]  { printf("%c stmts %c", $L, $R); }
        ; 

stmts   : /* empty */                   { ; }
        ;

%%

void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
