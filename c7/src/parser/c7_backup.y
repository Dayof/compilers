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
//%define lr.type canonical-lr

%start program

%union {
    char op;
    char* str_value;
    int int_value;
    float float_value;
}

%token <op>             BRACK_LEFT BRACK_RIGHT PARENT_LEFT PARENT_RIGHT SEMICOLON ADD SUB MULT DIV CHAR COMMA ASSIGN
%token <str_value>      READ WRITE WRITELN TYPE ID EMPTY STRING RETURN FORALL IN IS_SET ADD_SET REMOVE EXISTS IF ELSE
%token <int_value>      INTEGER
%token <float_value>    FLOAT

%left                   ADD SUB
%left                   MULT DIV

%nonassoc ELSE

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

simple_param_list   : simple_param_list COMMA[C] ID[V] { printf("\n\nSYNTAX - simple_param_list %c %s\n", $C, $V); }
                    | ID[V] { printf("\n\nSYNTAX - simple_param_list -> %s\n", $V); }
                    | /* empty */ { printf("\n\nSYNTAX - simple_param_list -> empty\n"); }
                    ;

comp_block_stmt : BRACK_LEFT[L] other_block_stmt BRACK_RIGHT[R] { printf("\n\nSYNTAX - %c block_stmt %c\n",
                                                                   $L, $R); }
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
            | func_call SEMICOLON[E] { printf("\n\nSYNTAX - block_stmt -> func_call %c\n", $E); }
            | RETURN[O] simple_expr SEMICOLON[E] { printf("\n\nSYNTAX - %s simple_expr %c\n", $O, $E); }
            | FORALL[O] PARENT_LEFT[L] set_expr PARENT_RIGHT[R] block_stmt { printf("\n\nSYNTAX - %s %c set_expr %c flex_comp_block_stmt\n",
                                                                                              $O, $L, $R); }
            | set_func_call SEMICOLON[E] { printf("\n\nSYNTAX - block_stmt -> set_func_call %c\n", $E); }
            // | error { printf("\n\nSYNTAX - ERROR RECOVERY\n"); }
            | comp_block_stmt
            ;

other_block_stmt    : block_stmt
                    | if_else_stmt
                    ;


if_else_stmt    : open_stmt { printf("\n\nSYNTAX - if_else_stmt -> open_stmt\n"); }
                | matched_stmt { printf("\n\nSYNTAX - if_else_stmt -> matched_stmt\n"); }
                ;

open_stmt   : IF[O] PARENT_LEFT[L] cond_expr PARENT_RIGHT[R] if_else_stmt { printf("\n\nSYNTAX - %s %c cond_expr %c if_else_stmt\n",
                                                                                   $O, $L, $R); }
            | IF[O1] PARENT_LEFT[L] cond_expr PARENT_RIGHT[R] matched_stmt ELSE[O2] open_stmt { printf("\n\nSYNTAX - %s %c cond_expr %c matched_stmt %s open_stmt\n",
                                                                                                       $O1, $L, $R, $O2); }
            ;

matched_stmt    : IF[O1] PARENT_LEFT[L] cond_expr PARENT_RIGHT[R] matched_stmt ELSE[O2] matched_stmt { printf("\n\nSYNTAX - %s %c cond_expr %c matched_stmt %s matched_stmt\n",
                                                                                                              $O1, $L, $R, $O2); }
                | block_stmt { printf("\n\nSYNTAX - matched_stmt -> flex_comp_block_stmt\n"); }
                ;

cond_expr   : ID[V] { printf("\n\nSYNTAX - cond_expr -> %s\n", $V); }
            ;

set_expr    : simple_expr IN[C] simple_expr { printf("\n\nSYNTAX - simple_expr %s simple_expr\n", $C); }
            ;   

func_call   : ID[V] PARENT_LEFT[L] simple_param_list PARENT_RIGHT[R] { printf("\n\nSYNTAX - %s %c simple_param_list %c\n",
                                                                              $V, $L, $R); }
            ;

set_func_call   : IS_SET[O] PARENT_LEFT[L] ID[C] PARENT_RIGHT[R] { printf("\n\nSYNTAX - %s %c %s %c\n",
                                                                              $O, $L, $C, $R); }
                | ADD_SET[O] PARENT_LEFT[L] set_expr PARENT_RIGHT[R] { printf("\n\nSYNTAX - %s %c set_expr %c\n",
                                                                              $O, $L, $R); }
                | REMOVE[O] PARENT_LEFT[L] set_expr PARENT_RIGHT[R] { printf("\n\nSYNTAX - %s %c set_expr %c\n",
                                                                              $O, $L, $R); }
                | EXISTS[O] PARENT_LEFT[L] set_expr PARENT_RIGHT[R] { printf("\n\nSYNTAX - %s %c set_expr %c\n",
                                                                              $O, $L, $R); }
                ;

simple_expr : arith_expr { printf("\n\nSYNTAX - simple_expr -> arith_expr\n"); }
            | func_cte_expr { printf("\n\nSYNTAX - simple_expr -> func_cte_expr\n"); }
            ;

func_cte_expr   : EMPTY[C] { printf("\n\nSYNTAX - simple_expr -> %s\n", $C); }
                | STRING[C] { printf("\n\nSYNTAX - simple_expr -> %s\n", $C); }
                | CHAR[C] { printf("\n\nSYNTAX - simple_expr -> %c\n", $C); }
                | func_call { printf("\n\nSYNTAX - simple_expr -> func_call\n"); }
                | set_func_call { printf("\n\nSYNTAX - simple_expr -> set_func_call\n"); }
                | PARENT_LEFT[L] func_cte_expr PARENT_RIGHT[R] { printf("\n\nSYNTAX - %c func_cte_expr %c\n", $L, $R); }
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
        | ID[C] { printf("\n\nSYNTAX - var -> %s\n", $C); }
        | PARENT_LEFT[L] arith_expr PARENT_RIGHT[R] { printf("\n\nSYNTAX - %c arith_expr %c\n", $L, $R); }
        ;

%%

void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
