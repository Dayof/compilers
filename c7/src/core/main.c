#include <stdio.h>
#include "scope.h"
#include "sym_tab.h"
#include "main.h"
#include "ast.h"
#include "lexer.h"
#include "parser.h"

void init_vars() {
    int verbose = 0;
    LEX_VERBOSE = verbose;
    PARSER_VERBOSE = verbose;
    MAIN_VERBOSE = verbose;
    SEMANTIC_VERBOSE = verbose;
    newline_counter = -1;
    parser_error = lex_error = semantic_error = 0;
    lex_line = lex_column = parser_line = parser_column = 1;

    global_symbol_table = NULL;
    scope_stack = NULL;
    arity_counter = 0;
    insert_result = 1;
}

int main (int argc, char* argv[]) {
	printf("Welcome to C7 interpreter:\n");

    // starts global variables and structures
    init_vars();
    create_empy_ast();
    start_root_scope();

    // init lexer and parser
    printf("Lexer/parser:\n");
    yyin = fopen(argv[1], "r");
    if (MAIN_VERBOSE) printf("\nline %d. ", lex_line);
    do {
        yyparse();
    } while (!feof(yyin));
    fclose(yyin);

    // check if there is a main
    check_main();

    printf("\nLexer and parser finished.\n\n");

    printf("\n## Symbol Table ##\n");
    print_aux_st();

    if (!(parser_error || lex_error)) {
        printf("\n\n## Abstract Syntax Tree ##");
        print_asts(ast_root);
    }

    if (parser_error || semantic_error || lex_error) {
        printf("\nErrors:\n");
        printf("Parser: %d errors.\n", parser_error);
        printf("Lexer: %d errors.\n", lex_error);
        printf("Semantic: %d errors.\n", semantic_error);
        printf("TOTAL: %d errors.\n", parser_error + lex_error + semantic_error);
    } else printf("\nNo errors found.\n");

    // clean memory
    delete_all_st();
    if (MAIN_VERBOSE) printf("symbol table cleaned\n");
    delete_all_ast();
    if (MAIN_VERBOSE) printf("asts cleaned\n");
    yylex_destroy();
    if (MAIN_VERBOSE) printf("yylex cleaned\n");
	
    return 0;
}
