/* tokens mapping */

%{
	#include <stdio.h>
	#include "sym_tab.h"
	#include "ast.h"
	#include "parser.h"

	enum TOKENS{
		ERROR_TOK=1,
		NEWLINE_TOK,
		WHITESPACE_TOK,
		ID_TOK,
		KEYWORD_TOK,
		FLOAT_TOK,
		DELIMITER_TOK,
		BOOLEAN_TOK,
		BOOLEAN_OP_TOK,
		STRING_TOK,
		COMMENT_TOK,
		INTEGER_TOK,
		ADD_TOK,
		SUB_TOK,
		MULT_TOK,
		DIV_TOK
	};
%}

%option outfile="lexer.c" header-file="lexer.h"
%option nounput
%option noinput

	/* regex and token definition */

DIGIT			[0-9]
NDIGIT			[1-9]
LETTER			[a-zA-Z]
SUB				("-")
ADD				("+")
MULT			("*")
DIV				("/")
OPERATOR		(ADD|SUB|MULT|DIV)
BOOLEAN_OP		("=="|"<="|">="|"!="|"<"|">"|"~"|"|"|"&"|"and"|"or"|"not")
DELIMITER		("="|"("|")"|"["|"]"|";"|","|"."|":")
BOOLEAN			("True"|"False")
NULL			("None")
NEWLINE			(\n)
WHITESPACE		([ \t]+)
VAR				({LETTER}|"_")({LETTER}|{DIGIT}|"_")*
STRING			(\".*\"|\'.*\')
INTEGER			({NDIGIT}{DIGIT}*|"0")
FLOAT			([{DIGIT}+]"."{DIGIT}+|{DIGIT}+".")
NUMBER			({INTEGER}|{FLOAT})

%%

	/* reserved keywords */

("input"|"print"|"if"|"elif"|"else"|"return"|"def"|"for"|"while")	;

	/* arithmetic expressions */

{INTEGER}		{ handle_token(INTEGER_TOK); return INTEGER; };
{FLOAT}																;
{SUB}			{ handle_token(SUB_TOK); return SUB; };
{ADD}			{ handle_token(ADD_TOK); return ADD; };
{MULT}			{ handle_token(MULT_TOK); return MULT; };
{DIV}			{ handle_token(DIV_TOK); return DIV; };
{DELIMITER}															;

	/* conditional and booleans expressions */

{BOOLEAN}															;
{BOOLEAN_OP}														;

	/* structure helpers */

#.*{NEWLINE}														;
{STRING}															;

	/* general */

{NEWLINE}		{ handle_token(NEWLINE_TOK); };
{WHITESPACE}   														;
{VAR}																;
.				{ handle_token(ERROR_TOK); };  /* any character but newline */

%%

/*
	Output example:
	- Command: sum_numbers = 1 + 1.0
	- Output: <id, 1> <delimiter, '='> <integer, '1'> <operator, '+'> <float, '1.0'> 
*/

void handle_token(int token) {
	switch (token) {
		case INTEGER_TOK:
			printf("Token: <integer, '%s'>", yytext);
			yylval.value = atoi(yytext); 
			break;
		case SUB_TOK:
			printf("Token: <sub, '%s'>", yytext);
			yylval.op = yytext;
			break;
		case ADD_TOK:
			printf("Token: <add, '%s'>", yytext);
			yylval.op = yytext;
			break;
		case MULT_TOK:
			printf("Token: <mult, '%s'>", yytext);
			yylval.op = yytext;
			break;
		case DIV_TOK:
			printf("Token: <div, '%s'>", yytext);
			yylval.op = yytext;
			break;
		case NEWLINE_TOK:
			line += 1;
			column = 0;  // reset column index 
			printf("\nline %d. ", line);
			break;
		case ERROR_TOK:
			printf("\nLexerError: line %d, column %d, token '%s' is not recognized\n",
				   line, column, yytext);
			exit(1);
		default:
			break;  // ignore
	}
	column += strlen(yytext);
}