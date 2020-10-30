/* tokens mapping */

%{
	#include <string.h>
	#include <stdio.h>
	#include "sym_tab.h"
	#include "ast.h"
	#include "parser.h"

	enum TOKENS {
		ERROR_TOK=1,
		NEWLINE_TOK,
		WHITESPACE_TOK,
		ID_TOK,
		ASSIGN_TOK,
		KEYWORD_TOK,
		VAR_TOK,
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

%option outfile="lexer/lexer.c" header-file="lexer/lexer.h"
%option nounput noinput yylineno

	/* regex and token definition */

DIGIT			[0-9]
NDIGIT			[1-9]
LETTER			[a-zA-Z]
SUB				("-")
ADD				("+")
MULT			("*")
DIV				("/")
BOOLEAN_OP		("=="|"<="|">="|"!="|"<"|">"|"~"|"|"|"&"|"and"|"or"|"not")
ASSIGN			("=")
DELIMITER		("("|")"|"["|"]"|";"|","|"."|":")
BOOLEAN			(True|False)
NULL			(None)
NEWLINE			(\n)
WHITESPACE		([ \t]+)
VAR				({LETTER}|"_")({LETTER}|{DIGIT}|"_")*
STRING			(\".*\"|\'.*\')
INTEGER			({NDIGIT}{DIGIT}*|"0")
FLOAT			({DIGIT}+\.{DIGIT}+)

%%

	/* reserved keywords */

("input"|"print"|"if"|"elif"|"else"|"return"|"def"|"for"|"while")	;

	/* arithmetic expressions */

{FLOAT}			{ handle_token(FLOAT_TOK); return FLOAT; };
{INTEGER}		{ handle_token(INTEGER_TOK); return INTEGER; };
{SUB}			{ handle_token(SUB_TOK); return SUB; };
{ADD}			{ handle_token(ADD_TOK); return ADD; };
{MULT}			{ handle_token(MULT_TOK); return MULT; };
{DIV}			{ handle_token(DIV_TOK); return DIV; };
{ASSIGN}		{ handle_token(ASSIGN_TOK); return ASSIGN; };
{DELIMITER}															;

	/* conditional and booleans expressions */

{BOOLEAN}		{ handle_token(BOOLEAN_TOK); return BOOLEAN; };
{BOOLEAN_OP}														;

	/* structure helpers */

#.*{NEWLINE}														;
{STRING}															;

	/* general */

{NEWLINE}		{ handle_token(NEWLINE_TOK); return NEWLINE; };
{WHITESPACE}   														;
{VAR}			{ handle_token(ID_TOK); return ID; };
.				{ handle_token(ERROR_TOK); };  /* any character but newline */

%%

void handle_token(int token) {
	parser_column = lex_column;
	switch (token) {
		case BOOLEAN_TOK:
			if (LEX_VERBOSE) printf("Token: <boolean, '%s'>", yytext);
			if (strcmp(yytext, "True") == 0) yylval.int_value = 1; 
			else if (strcmp(yytext, "False") == 0) yylval.int_value = 0; 
			break;
		case INTEGER_TOK:
			if (LEX_VERBOSE) printf("Token: <integer, '%s'>", yytext);
			yylval.int_value = atoi(yytext); 
			break;
		case FLOAT_TOK:
			if (LEX_VERBOSE) printf("Token: <float, '%s'>", yytext);
			yylval.float_value = atof(yytext); 
			break;
		case SUB_TOK:
			if (LEX_VERBOSE) printf("Token: <sub, '%s'>", yytext);
			yylval.op = yytext;
			break;
		case ADD_TOK:
			if (LEX_VERBOSE) printf("Token: <add, '%s'>", yytext);
			yylval.op = yytext;
			break;
		case MULT_TOK:
			if (LEX_VERBOSE) printf("Token: <mult, '%s'>", yytext);
			yylval.op = yytext;
			break;
		case DIV_TOK:
			if (LEX_VERBOSE) printf("Token: <div, '%s'>", yytext);
			yylval.op = yytext;
			break;
		case ID_TOK:
			if (LEX_VERBOSE) printf("Token: <id, '%s'>", yytext);
			int idx = add_word(len_st(), yytext);
			yylval.st_ref = idx;
			break;
		case ASSIGN_TOK:
			if (LEX_VERBOSE) printf("Token: <assign, '%s'>", yytext);
			yylval.op = yytext;
			break;
		case NEWLINE_TOK:
			parser_line = lex_line;
			parser_column = lex_column; 
			lex_line += 1;
			lex_column = 0;  // reset column index 
			if (LEX_VERBOSE) printf("\nline %d. ", lex_line);
			break;
		case ERROR_TOK:
			printf("\nLexError: token '%s' is not recognized in line %d, column %d.\n",
			       yytext, lex_line, lex_column);
		default:
			break;  // ignore
	}
	lex_column += strlen(yytext);
}