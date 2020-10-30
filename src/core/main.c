#include <stdio.h>
#include "sym_tab.h"
#include "ast.h"
#include "lexer.h"
#include "parser.h"

int main (int argc, char* argv[]) {
	printf("Welcome to CPPython interpreter:\n");
    MAIN_VERBOSE = LEX_VERBOSE = PARSER_VERBOSE = 0;
    AST_LVL = 0;
    root = NULL;

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

    printf("Abstract Syntax Tree:\n");
    print_ast(root);

    printf("\nSymbol Table:\n");
    print_st();
	
    return 0;
}
