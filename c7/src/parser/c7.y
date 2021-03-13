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

program : stmts { printf("\n\nSYNTAX - program -> stmts\n"); }
        ;

stmts   : stmts stmt { printf("\n\nSYNTAX - stmts -> stmts stmt\n"); }
        | stmt { printf("\n\nSYNTAX -  stmts -> stmt\n"); }
        ;

stmt    : func_stmt { printf("\n\nSYNTAX - func_stmt\n"); }
        | var_decl_stmt { printf("\n\nSYNTAX - var_decl_stmt\n"); }
        ;

func_stmt   : TYPE[T] ID[F] PARENT_LEFT[L] PARENT_RIGHT[R] comp_block_stmt { printf("\n\nSYNTAX - %s %s %c %c comp_block_stmt\n",
                                                                                    $T, $F, $L, $R); }
            ;

var_decl_stmt   : TYPE[T] ID[V] SEMICOLON[E] { printf("\n\nSYNTAX - %s %s %c\n", $T, $V, $E); }
                ; 

comp_block_stmt : BRACK_LEFT[L] block_stmts BRACK_RIGHT[R] { printf("\n\nSYNTAX - %c block_stmts %c\n",
                                                                    $L, $R); }
                ;

block_stmts : block_stmts block_stmt { printf("\n\nSYNTAX - block_stmts block_stmt\n"); }
            | /* empty */ { printf("\n\nSYNTAX - block_stmts -> empty\n"); }
            ;

block_stmt  : READ[F] PARENT_LEFT[L] ID[C] PARENT_RIGHT[R] SEMICOLON[E] { printf("\n\nSYNTAX - %s %c %s %c %c\n",
                                                                                 $F, $L, $C, $R, $E); }
            | var_decl_stmt { printf("\n\nSYNTAX - block_stmt -> var_decl_stmt\n"); }
            ;

%%

void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
