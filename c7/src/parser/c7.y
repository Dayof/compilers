%{
    #include <stdlib.h>
    #include <stdio.h>
    #include "ast.h"
    #include "scope.h"

    int yylex();
    void yyerror(const char *s);
%}

%output  "parser/parser.c"
%defines "parser/parser.h"
%define parse.error verbose
%define lr.type canonical-lr

%start program

%union {
    char char_value;
    char* str_value;
    int int_value;
    float float_value;
    ast_node* expression;
}

%token <char_value>     BRACK_LEFT BRACK_RIGHT PARENT_LEFT PARENT_RIGHT SEMICOLON
%token <char_value>     ADD SUB MULT DIV COMMA ASSIGN NOT_OP L_OP G_OP CHAR
%token <str_value>      READ WRITE WRITELN TYPE EMPTY STRING RETURN FORALL FOR
%token <str_value>      IN IS_SET ADD_SET REMOVE EXISTS IF ELSE EQ_OP NE_OP
%token <str_value>      LE_OP GE_OP OR_OP AND_OP
%token <int_value>      INTEGER ID
%token <float_value>    FLOAT

%left                   L_OP G_OP EQ_OP NE_OP LE_OP GE_OP
%left                   ADD SUB
%left                   MULT DIV
%left                   UMINUS

%nonassoc THEN
%nonassoc ELSE

%type  <expression>     func_stmt param_list compound_block_stmt var_decl_stmt
%type  <expression>     block_stmts block_stmt simple_expr arith_expr term factor
%type  <expression>     func_cte_expr func_expr func_call simple_param_list
%type  <expression>     set_func_call set_expr flow_control block_item
%type  <expression>     or_cond_expr and_cond_expr unary_cond_expr eq_cond_expr
%type  <expression>     equal_ops rel_cond_expr opt_param for_expression
%type  <expression>     decl_or_cond_expr rel_ops rel_cond_stmt error 
%type  <expression>     flow_control_if

%%

program : stmts { if(PARSER_VERBOSE) printf("[BISON] program -> stmts\n"); }   
        ;

stmts   : stmts stmt { 
            if(PARSER_VERBOSE) printf("[BISON] stmts -> stmts stmt\n");
        }   
        | stmt { if(PARSER_VERBOSE) printf("[BISON] stmts -> stmt\n"); } 
        ;

stmt    : func_stmt[U] { add_ast($U); }
        | var_decl_stmt[U] {
            if(PARSER_VERBOSE) printf("[BISON] stmt -> var_decl_stmt\n");
            add_ast($U);
        }
        | error { 
            if(PARSER_VERBOSE) printf("[BISON] stmt -> error\n");
            yyerrok;
        }
        ;

func_stmt   : TYPE[T] ID[N] {
                set_id_type($N, ST_ID_FUNC);
                set_data_type($N, type2dt($T));
                global_func_data_type = type2dt($T);
                insert_result = insert_symbol($N);
                if (!insert_result) set_existance_tag($N, ET_SOFT_DELETE);
            } PARENT_LEFT {
                push_scope($N);
            } param_list[P] PARENT_RIGHT {
                set_arity($N, arity_counter);
                arity_counter = 0;
            } compound_block_stmt[E] {
                pop_scope();
                $$ = create_func_expr(create_str_expr($T), create_var_expr($N), $P, $E);
                free($T);
            }
            ;

var_decl_stmt   : TYPE[T] ID[N] {
                    if(PARSER_VERBOSE) printf("[BISON] var_decl_stmt -> type id\n");
                    set_id_type($N, ST_ID_VAR);
                    set_data_type($N, type2dt($T));
                    insert_result = insert_symbol($N);
                    if (!insert_result) set_existance_tag($N, ET_SOFT_DELETE);
                } SEMICOLON {
                    if(PARSER_VERBOSE) printf("[BISON] var_decl_stmt -> semicolon\n");
                    $$ = create_bin_expr(create_str_expr($T), create_var_expr($N), BINARY_TYPE);
                    free($T);
                }
                ; 

param_list  : param_list[L] COMMA TYPE[T] ID[N] {
                set_id_type($N, ST_ID_PARAM);
                set_data_type($N, type2dt($T));
                insert_result = insert_symbol($N);
                if (!insert_result) set_existance_tag($N, ET_SOFT_DELETE);
                arity_counter += 1;
                $$ = create_ter_expr($L, create_str_expr($T), create_var_expr($N), TERNARY_TYPE);
                free($T);
            }
            | TYPE[T] ID[N] {
                set_id_type($N, ST_ID_PARAM);
                set_data_type($N, type2dt($T));
                insert_result = insert_symbol($N);
                if (!insert_result) set_existance_tag($N, ET_SOFT_DELETE);
                arity_counter += 1;
                $$ = create_bin_expr(create_str_expr($T), create_var_expr($N), BINARY_TYPE);
                free($T);
            }
            | /* empty */ {
                $$ = create_empty_expr();
            }
            ;

simple_param_list   : simple_param_list[E] COMMA simple_expr[N] {
                        arity_counter += 1;
                        $$ = create_bin_expr($E, $N, BINARY_TYPE);
                    }
                    | simple_expr[U] {
                        arity_counter += 1;
                        $$ = $U;
                    }
                    | /* empty */ { $$ = create_empty_expr(); }
                    ;

compound_block_stmt : BRACK_LEFT {
                        push_scope_block();
                    } block_stmts[U] BRACK_RIGHT {
                        $$ = $U;
                        pop_scope();
                    }
                    | BRACK_LEFT {
                        push_scope_block();
                    } BRACK_RIGHT  {
                        $$ = create_empty_expr();
                        pop_scope();
                    }
                    ;

block_stmts : block_stmts[F] block_item[S] {
                $$ = create_bin_expr($F, $S, BINARY_TYPE);
                global_var_data_type = DT_UNDEFINED;
            }
            | block_item[U] {
                $$ = $U;
                global_var_data_type = DT_UNDEFINED;
            }
            ;
    
block_item  : var_decl_stmt[U] { $$ = $U; }
            | block_stmt[U] { $$ = $U; }
            ;
            
block_stmt  : compound_block_stmt[U] { $$ = $U; }
            | func_call[U] SEMICOLON { $$ = $U; }
            | set_func_call[U] SEMICOLON { $$ = $U; }
            | flow_control[U] { $$ = $U; }
            | READ[T] PARENT_LEFT ID[N] PARENT_RIGHT SEMICOLON {
                $$ = create_bin_expr(create_str_expr($T), create_var_expr($N), BINARY_TYPE); 
                set_id_type($N, ST_ID_VAR);
                check_declared($N);
                free($T);
            }
            | WRITE[T] PARENT_LEFT simple_expr[E] PARENT_RIGHT SEMICOLON {
                $$ = create_bin_expr(create_str_expr($T), $E, WRITE_TYPE); 
                free($T);
            }
            | WRITELN[T] PARENT_LEFT simple_expr[E] PARENT_RIGHT SEMICOLON {
                $$ = create_bin_expr(create_str_expr($T), $E, WRITELN_TYPE); 
                free($T);
            }
            | ID[N] ASSIGN[A] {
                set_id_type($N, ST_ID_VAR); 
                check_declared($N);
                global_var_data_type = get_var_type($N);
            } simple_expr[E] SEMICOLON {
                $$ = create_ter_expr(create_var_expr($N), create_char_expr($A),
                                     $E, ASSIGN_TYPE);
            }
            | RETURN[T] {
                global_var_data_type = global_func_data_type;
            } simple_expr[E] SEMICOLON {
                $$ = create_bin_expr(create_str_expr($T), $E, BINARY_TYPE); 
                free($T);
            }
            | error { 
                $$ = create_empty_expr();
                yyerrok;
            }
            ;

flow_control_if : IF[T] PARENT_LEFT {
                    global_var_data_type = DT_FLOAT_IF;
                    $$ = create_str_expr($T);
                    free($T);
                }
                ;

flow_control    : flow_control_if[FC1] or_cond_expr[E1] PARENT_RIGHT block_item[E2] %prec THEN {
                    $$ = create_ter_expr($FC1, $E1, $E2, TERNARY_TYPE); 
                }
                | flow_control_if[FC1] or_cond_expr[E1] PARENT_RIGHT block_item[E2] ELSE[E3] block_item[E4] {
                    $$ = create_qui_expr($FC1, $E1, $E2, create_str_expr($E3), $E4);
                    free($E3);
                }
                | FORALL[T] PARENT_LEFT set_expr[E1] PARENT_RIGHT block_item[E2] {
                    $$ = create_ter_expr(create_str_expr($T), $E1, $E2, TERNARY_TYPE); 
                    free($T);
                }
                | FOR[T] PARENT_LEFT opt_param[E1] opt_param[E2] PARENT_RIGHT block_item[E3] {
                    $$ = create_qua_expr(create_str_expr($T), $E1, $E2, $E3); 
                    free($T);
                }
                | FOR[T] PARENT_LEFT opt_param[E1] opt_param[E2] for_expression[E3] PARENT_RIGHT block_item[E4] {
                    $$ = create_qui_expr(create_str_expr($T), $E1, $E2, $E3, $E4); 
                    free($T);
                }
                ;

opt_param   : SEMICOLON { $$ = create_empty_expr(); }
            | for_expression[U] SEMICOLON { $$ = $U; }
            ;

for_expression  : decl_or_cond_expr[U] { $$ = $U; }
                | for_expression[E1] COMMA decl_or_cond_expr[E2] {
                    $$ = create_bin_expr($E1, $E2, BINARY_TYPE); 
                }
                ; 

decl_or_cond_expr   : or_cond_expr[U] { $$ = $U; }
                    | TYPE[T] ID[N] ASSIGN[A] simple_expr[E] {
                        $$ = create_qua_expr(create_str_expr($T), create_var_expr($N),
                                             create_char_expr($A), $E); 
                        set_id_type($N, ST_ID_VAR);
                        check_declared($N);
                        free($T);
                    }
                    | ID[N] ASSIGN[A] simple_expr[E] {
                        $$ = create_ter_expr(create_var_expr($N), create_char_expr($A), $E, TERNARY_TYPE);
                        set_id_type($N, ST_ID_VAR);
                        check_declared($N);
                    }
                    ;

or_cond_expr    : or_cond_expr[E1] OR_OP[OP] and_cond_expr[E2] {
                    $$ = create_ter_expr($E1, create_str_expr($OP), $E2, TERNARY_TYPE); 
                    free($OP);
                }
                | and_cond_expr[U] { $$ = $U; }
                ;

and_cond_expr   : and_cond_expr[E1] AND_OP[OP] unary_cond_expr[E2] {
                    $$ = create_ter_expr($E1, create_str_expr($OP), $E2, TERNARY_TYPE); 
                    free($OP);
                }
                | unary_cond_expr[U] { $$ = $U; }
                ;

unary_cond_expr : NOT_OP[O] unary_cond_expr[E] {
                    $$ = create_bin_expr(create_char_expr($O), $E, BINARY_TYPE); 
                }
                | eq_cond_expr[U] { $$ = $U; }
                ;

eq_cond_expr    : eq_cond_expr[E1] equal_ops[M] rel_cond_expr[E2] {
                    $$ = create_ter_expr($E1, $M, $E2, TERNARY_TYPE);
                }
                | rel_cond_expr[U] { $$ = $U; }
                ;

equal_ops   : EQ_OP[U] {
                $$ = create_str_expr($U);
                free($U);
            }
            | NE_OP[U] {
                $$ = create_str_expr($U);
                free($U);
            }
            ;

rel_cond_expr   : rel_cond_expr[E1] rel_ops[OP] rel_cond_stmt[E2] {
                    $$ = create_ter_expr($E1, $OP, $E2, TERNARY_TYPE);
                }
                | rel_cond_stmt[U] { $$ = $U; }
                ;

rel_cond_stmt   : arith_expr[U] { $$ = $U; }
                | EMPTY[U] {
                    $$ = create_str_expr($U);
                    free($U);
                }
                ;

rel_ops : L_OP[U] { $$ = create_char_expr($U); }
        | G_OP[U] { $$ = create_char_expr($U); }
        | LE_OP[U] {
            $$ = create_str_expr($U);
            free($U);
        }
        | GE_OP[U] { 
            $$ = create_str_expr($U);
            free($U);
        }
        | IN[U] {
            $$ = create_str_expr($U);
            free($U);
        }
        ;           
    
set_expr    : simple_expr[E1] IN[M] simple_expr[E2] {
                $$ = create_ter_expr($E1, create_str_expr($M), $E2, TERNARY_TYPE); 
                free($M);
            }
            ;   

func_call   : ID[N] PARENT_LEFT simple_param_list[E] PARENT_RIGHT {
                if(PARSER_VERBOSE)
                    printf("[BISON] Function call arity %d.\n", arity_counter);
                set_arity($N, arity_counter);
                check_function($N);
                $$ = create_bin_expr(create_var_expr($N), $E, BINARY_TYPE);
                arity_counter = 0;
            }
            ;

set_func_call   : IS_SET[T] PARENT_LEFT ID[N] PARENT_RIGHT {
                    $$ = create_bin_expr(create_str_expr($T), create_var_expr($N), BINARY_TYPE); 
                    set_id_type($N, ST_ID_VAR);
                    free($T);
                }
                | ADD_SET[T] PARENT_LEFT set_expr[E] PARENT_RIGHT {
                    $$ = create_bin_expr(create_str_expr($T), $E, BINARY_TYPE); 
                    free($T);
                }
                | REMOVE[T] PARENT_LEFT set_expr[E] PARENT_RIGHT {
                    $$ = create_bin_expr(create_str_expr($T), $E, BINARY_TYPE); 
                    free($T);
                }
                | EXISTS[T] PARENT_LEFT set_expr[E] PARENT_RIGHT {
                    $$ = create_bin_expr(create_str_expr($T), $E, BINARY_TYPE);
                    free($T); 
                }
                ;

simple_expr : arith_expr[U] { $$ = $U; }
            | func_cte_expr[U] { $$ = $U; }
            ;

func_cte_expr   : EMPTY[U] {
                    $$ = create_str_expr($U);
                    free($U);
                }
                | STRING[U] {
                    $$ = create_str_expr($U);
                    free($U);
                }
                | CHAR[U] {
                    $$ = create_char_expr($U);
                }
                ;

func_expr       : func_call[U] { $$ = $U; }
                | set_func_call[U] { $$ = $U; }
                | PARENT_LEFT func_cte_expr[U] PARENT_RIGHT { $$ = $U; }
                ;

arith_expr  : arith_expr[L] ADD[M] term[R] {
                $$ = create_ter_expr($L, create_char_expr($M), $R, ADD_TYPE);
            }
            | arith_expr[L] SUB[M] term[R] {
                $$ = create_ter_expr($L, create_char_expr($M), $R, TERNARY_TYPE);
            }
            | term[U] { $$ = $U; }
            ;

term    : term[L] MULT[M] factor[R] {
            $$ = create_ter_expr($L, create_char_expr($M), $R, TERNARY_TYPE);
        }
        | term[L] DIV[M] factor[R] {
            $$ = create_ter_expr($L, create_char_expr($M), $R, TERNARY_TYPE);
        }
        | factor[U] { $$ = $U; }
        | SUB[T] factor[U] %prec UMINUS { 
            $$ = create_bin_expr(create_char_expr($T), $U, BINARY_TYPE); 
        }
        ;

factor  : INTEGER[U] {
            if (global_var_data_type == DT_FLOAT || global_var_data_type == DT_FLOAT_IF)
                $$ = create_type_cast_expr("int2float", create_int_expr($U));
            else $$ = create_int_expr($U);
        }
        | FLOAT[U] {
            if (global_var_data_type == DT_INT)
                $$ = create_type_cast_expr("float2int", create_float_expr($U));
            else $$ = create_float_expr($U);
        }
        | ID[N] {
            set_id_type($N, ST_ID_VAR);
            check_declared($N);
            if (global_var_data_type == DT_INT || global_var_data_type == DT_FLOAT) {
                if (get_var_type($N) == DT_SET) {
                    raise_wrong_cast(DT_SET, parser_line, parser_column);
                    $$ = create_type_cast_expr("wrong_cast", create_var_expr($N));
                } else if (get_var_type($N) == DT_INT && global_var_data_type == DT_FLOAT)
                    $$ = create_type_cast_expr("float2int", create_var_expr($N));
                else if (get_var_type($N) == DT_FLOAT && global_var_data_type == DT_INT)
                    $$ = create_type_cast_expr("int2float", create_var_expr($N));
                else $$ = create_var_expr($N);
            } else $$ = create_var_expr($N);
        }
        | PARENT_LEFT arith_expr[U] PARENT_RIGHT { $$ = $U; }
        | func_expr[U] { $$ = $U; }
        ;

%%

void yyerror(const char *s) {
    printf("\nSyntaxError:%d:%d: %s.\n", parser_line, parser_column, s);
    parser_error += 1;
}
