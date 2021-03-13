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
%token <str_value>      READ WRITE WRITELN TYPE ID EMPTY STRING
%token <int_value>      INTEGER
%token <float_value>    FLOAT

%left                   ADD SUB
%left                   MULT DIV

%%

program : stmts { printf("\n\nSYNTAX - program -> stmts\n"); }
        ;

stmts   : stmts stmt { printf("\n\nSYNTAX - stmts -> stmts stmt\n"); }
        | stmt { printf("\n\nSYNTAX -  stmts -> stmt\n"); }
        ;

stmt    : func_stmt { printf("\n\nSYNTAX - func_stmt\n"); }
        | var_decl_stmt { printf("\n\nSYNTAX - var_decl_stmt\n"); }
        ;

func_stmt   : TYPE[T] ID[F] PARENT_LEFT[L] param_list PARENT_RIGHT[R] comp_block_stmt { printf("\n\nSYNTAX - %s %s %c param_list %c comp_block_stmt\n",
                                                                                               $T, $F, $L, $R); }
            ;

var_decl_stmt   : TYPE[T] ID[V] SEMICOLON[E] { printf("\n\nSYNTAX - %s %s %c\n", $T, $V, $E); }
                ; 

param_list  : param_list COMMA[C] TYPE[T] ID[V] { printf("\n\nSYNTAX - param_list %c %s %s\n", $C, $T, $V); }
            | TYPE[T] ID[V] { printf("\n\nSYNTAX - param_list -> %s %s\n", $T, $V); }
            | /* empty */ { printf("\n\nSYNTAX - param_list -> empty\n"); }
            ;

comp_block_stmt : BRACK_LEFT[L] block_stmts BRACK_RIGHT[R] { printf("\n\nSYNTAX - %c block_stmts %c\n",
                                                                    $L, $R); }
                ;

block_stmts : block_stmts block_stmt { printf("\n\nSYNTAX - block_stmts block_stmt\n"); }
            | /* empty */ { printf("\n\nSYNTAX - block_stmts -> empty\n"); }
            ;

block_stmt  : READ[F] PARENT_LEFT[L] ID[C] PARENT_RIGHT[R] SEMICOLON[E] { printf("\n\nSYNTAX - %s %c %s %c %c\n",
                                                                                 $F, $L, $C, $R, $E); }
            | WRITE[F] PARENT_LEFT[L] simple_expr PARENT_RIGHT[R] SEMICOLON[E] { printf("\n\nSYNTAX - %s %c simple_expr %c %c\n",
                                                                                        $F, $L, $R, $E); }                                                                     
            | WRITELN[F] PARENT_LEFT[L] simple_expr PARENT_RIGHT[R] SEMICOLON[E] { printf("\n\nSYNTAX - %s %c simple_expr %c %c\n",
                                                                                          $F, $L, $R, $E); }                                                                     
            | var_decl_stmt { printf("\n\nSYNTAX - block_stmt -> var_decl_stmt\n"); }
            | ID[V] ASSIGN[C] simple_expr SEMICOLON[E] { printf("\n\nSYNTAX - %s %c simple_expr %c\n",
                                                                $V, $C, $E); }
            ;

simple_expr : arith_expr { printf("\n\nSYNTAX - simple_expr -> arith_expr\n"); }
            | EMPTY[C] { printf("\n\nSYNTAX - simple_expr -> %s\n", $C); }
            | STRING[C] { printf("\n\nSYNTAX - simple_expr -> %s\n", $C); }
            | CHAR[C] { printf("\n\nSYNTAX - simple_expr -> %c\n", $C); }
            ;

arith_expr  : arith_expr ADD[C] term { printf("\n\nSYNTAX - arith_expr %c term\n", $C); }
            | arith_expr SUB[C] term { printf("\n\nSYNTAX - arith_expr %c term\n", $C); }
            | term { printf("\n\nSYNTAX - arith_expr -> term\n"); }
            ;

term    : term MULT[C] factor { printf("\n\nSYNTAX - term %c factor\n", $C); }
        | term DIV[C] factor { printf("\n\nSYNTAX - term %c factor\n", $C); }
        | factor { printf("\n\nSYNTAX - term -> factor\n"); }
        ;

factor  : INTEGER[C] { printf("\n\nSYNTAX - integer -> %d\n", $C); }
        | FLOAT[C] { printf("\n\nSYNTAX - float -> %f\n", $C); }
        ;

%%

void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
