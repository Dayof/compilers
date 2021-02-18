#include <stdio.h>
#include "sym_tab.h"
#include "semantic.h"
#include "ast.h"
#include "lexer.h"
#include "parser.h"

void init_vars() {
    MAIN_VERBOSE = LEX_VERBOSE = 0;
    lex_error = syntax_error = 0;
    semantic_warning = 0;
    PARSER_VERBOSE = 0;
    newline_counter = -1;
    symbol_table = NULL;
    ast_root = NULL;
}

int main (int argc, char* argv[]) {
	printf("Welcome to CPPython interpreter:\n");
    init_vars();

    // init lexer and parser
    printf("Lexer/parser:\n");
    lex_line = lex_column = parser_line = parser_column = 1;
    yyin = fopen(argv[1], "r");
    if (MAIN_VERBOSE) printf("\nline %d. ", lex_line);
    do {
        yyparse();
    } while (!feof(yyin));
    fclose(yyin);
    printf("\nLexer and parser finished.\n\n");

    printf("\n## Symbol Table ##\n");
    print_st();

    if (!(syntax_error || lex_error)) {
        printf("## Abstract Syntax Trees ##");
        print_asts(ast_root);
    }

    // clean memory
    delete_all_st();
    yylex_destroy();
	
    return 0;
}
