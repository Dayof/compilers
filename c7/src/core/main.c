#include <stdio.h>
#include "main.h"
#include "lexer.h"

void init_vars() {
    LEX_VERBOSE = 1;
    newline_counter = -1;
}

int main (int argc, char* argv[]) {
	printf("Welcome to C7 interpreter:\n");
    init_vars();

    // init lexer
    printf("Lexer:\n");
    lex_line = lex_column = 1;
    yyin = fopen(argv[1], "r");
    do {
        yylex();
    } while (!feof(yyin));
    fclose(yyin);
    printf("\nLexer finished.\n");

    // clean flex memory
    yylex_destroy();
	
    return 0;
}
