#include <stdio.h>
#include "ast.h"
#include "lexer.h"
#include "parser.h"

int main (int argc, char *argv[]) {
	printf("Welcome to CPPython interpreter:\n");

    // init lexer and parser
    printf("Lexer/parser:\n");
    line = column = 1;
    yyin = fopen(argv[1], "r");
    printf("\nline %d. ", line);
    do {
        yyparse();
    } while (!feof(yyin));
    fclose(yyin);
    printf("\n");
    printf("Lexer and parser finished.\n\n");
	
    return 0;
}
