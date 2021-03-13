/* tokens mapping */

%{
	#include <stdio.h>
	#include "main.h"
	#include "sym_tab.h"
	#include "parser.h"

	enum TOKENS {
		ERROR_TOK=1,
		STRING_TOK,
		CHAR_TOK,
		TYPE_TOK,
		IF_TOK,
		ELSE_TOK,
		FOR_TOK,
		FORALL_TOK,
		RETURN_TOK,
		READ_TOK,
		WRITE_TOK,
		WRITELN_TOK,
		IN_TOK,
		EMPTY_TOK,
		COMMENT_TOK,
		FLOAT_TOK,
		INTEGER_TOK,
		ADD_TOK,
		SUB_TOK,
		MULT_TOK,
		DIV_TOK,
		ASSIGN_TOK,
		PARENT_LEFT_TOK,
		PARENT_RIGHT_TOK,
		BRACK_LEFT_TOK,
		BRACK_RIGHT_TOK,
		SEMICOLON_TOK,
		COMMA_TOK,
		OR_OP_TOK,
		AND_OP_TOK,
		NOT_OP_TOK,
		BOOLEAN_OP_TOK,
		NEWLINE_TOK,
		WHITESPACE_TOK,
		ID_TOK,
		EOF_TOK
	};
%}

%option outfile="lexer/lexer.c" header-file="lexer/lexer.h"
%option nounput noinput yylineno

	/* regex and token definition */

DIGIT			[0-9]
NDIGIT			[1-9]
LETTER			[a-zA-Z]
WHITESPACE		([ \t]+)
NEWLINE			(\n)
ADD				("+")
SUB				("-")
MULT			("*")
DIV				("/")
OPERATOR		({ADD}|{SUB}|{MULT}|{DIV})
ASSIGN			("=")
PARENT_LEFT		("(")
PARENT_RIGHT	(")")
BRACK_LEFT		("{")
BRACK_RIGHT		("}")
SEMICOLON		(";")
COMMA			(",")
OR_OP			("||")
AND_OP			("&&")
NOT_OP			("!")
BOOLEAN_OP		("=="|">="|"<="|"!="|">"|"<"|"<>"|"~")
ID				({LETTER}|"_")({LETTER}|{DIGIT}|"_")*
STRING			(\".*\")
CHAR			(\'.?\')
INTEGER			({NDIGIT}{DIGIT}*|"0")
FLOAT			({DIGIT}+\.{DIGIT}+)
NUMBER			({INTEGER}|{FLOAT})
TYPE			("int"|"float"|"elem"|"set")
IF				("if")
ELSE			("else")
FOR				("for")
FORALL   		("forall")
RETURN			("return")
READ			("read")
WRITE			("write")
WRITELN			("writeln")
IN				("in")
EMPTY			("EMPTY")
COMMENT			("//".*)

%%

	/* reserved keywords */

{TYPE}			{ handle_token(TYPE_TOK); return TYPE; };
{IF}			{ handle_token(IF_TOK); };
{ELSE}			{ handle_token(ELSE_TOK); };
{FOR}			{ handle_token(FOR_TOK); };
{FORALL}		{ handle_token(FORALL_TOK); };
{RETURN}		{ handle_token(RETURN_TOK); };
{READ}			{ handle_token(READ_TOK); return READ; };
{WRITE}			{ handle_token(WRITE_TOK); return WRITE; };
{WRITELN}		{ handle_token(WRITELN_TOK); return WRITELN; };
{IN}			{ handle_token(IN_TOK); };
{EMPTY}			{ handle_token(EMPTY_TOK); };

	/* arithmetic expressions */

{FLOAT}			{ handle_token(FLOAT_TOK); return FLOAT; };
{INTEGER}		{ handle_token(INTEGER_TOK); return INTEGER; };
{ADD}			{ handle_token(ADD_TOK); return ADD; };
{SUB}			{ handle_token(SUB_TOK); return SUB; };
{MULT}			{ handle_token(MULT_TOK); return MULT; };
{DIV}			{ handle_token(DIV_TOK); return DIV; };
{ASSIGN}		{ handle_token(ASSIGN_TOK); };
{PARENT_LEFT}	{ handle_token(PARENT_LEFT_TOK); return PARENT_LEFT; };
{PARENT_RIGHT}	{ handle_token(PARENT_RIGHT_TOK); return PARENT_RIGHT; };
{BRACK_LEFT}	{ handle_token(BRACK_LEFT_TOK); return BRACK_LEFT; };
{BRACK_RIGHT}	{ handle_token(BRACK_RIGHT_TOK); return BRACK_RIGHT; };
{SEMICOLON}		{ handle_token(SEMICOLON_TOK); return SEMICOLON; };
{COMMA}			{ handle_token(COMMA_TOK); };
{OR_OP}			{ handle_token(OR_OP_TOK); };
{AND_OP}		{ handle_token(AND_OP_TOK); };

	/* conditional and booleans expressions */

{BOOLEAN_OP}	{ handle_token(BOOLEAN_OP_TOK); };

	/* structure helpers */

{COMMENT}{NEWLINE} { handle_token(COMMENT_TOK); };														;
{STRING}		   { handle_token(STRING_TOK); };
{CHAR}			   { handle_token(CHAR_TOK); };

	/* general */

{NEWLINE}		{ handle_token(NEWLINE_TOK); };
{WHITESPACE}   	{ lex_column += strlen(yytext); }													;
{ID}			{ handle_token(ID_TOK); return ID; };
<<EOF>>         { handle_token(EOF_TOK); yyterminate(); };
.				{ handle_token(ERROR_TOK); };  /* any character but newline */

%%

/*
	Output example:
	- Command: float sum_numbers = 1 + 1.0;
	- Output: <type,'float'> <id, 'sum_numbers'> <delimiter, '='> <integer, '1'> <add, '+'> <float, '1.0'> <semicolon, ';'> 
*/

void handle_token(int token) {
	switch (token) {
		case STRING_TOK:
			if (LEX_VERBOSE) printf("<string, '%s'> ", yytext);
			break;
		case CHAR_TOK:
			if (LEX_VERBOSE) printf("<char, '%s'> ", yytext);
			break;
		case TYPE_TOK:
			if (LEX_VERBOSE) printf("<type, '%s'> ", yytext);
			yylval.str_value = (char*) malloc(256);
			strcpy(yylval.str_value, yytext);
			break;
		case IF_TOK:
			if (LEX_VERBOSE) printf("<if> ");
			break;
		case ELSE_TOK:
			if (LEX_VERBOSE) printf("<else> ");
			break;
		case FOR_TOK:
			if (LEX_VERBOSE) printf("<for> ");
			break;
		case FORALL_TOK:
			if (LEX_VERBOSE) printf("<forall> ");
			break;
		case RETURN_TOK:
			if (LEX_VERBOSE) printf("<return> ");
			break;
		case READ_TOK:
			if (LEX_VERBOSE) printf("<read> ");
			yylval.str_value = (char*) malloc(256); 
			strcpy(yylval.str_value, yytext);
			break;
		case WRITE_TOK:
			if (LEX_VERBOSE) printf("<write> ");
			yylval.str_value = (char*) malloc(256); 
			strcpy(yylval.str_value, yytext);
			break;
		case WRITELN_TOK:
			if (LEX_VERBOSE) printf("<writeln> ");
			yylval.str_value = (char*) malloc(256); 
			strcpy(yylval.str_value, yytext);
			break;
		case IN_TOK:
			if (LEX_VERBOSE) printf("<in> ");
			break;
		case EMPTY_TOK:
			if (LEX_VERBOSE) printf("<EMPTY> ");
			break;
		case FLOAT_TOK:
			if (LEX_VERBOSE) printf("<float, '%s'> ", yytext);
			yylval.float_value = atof(yytext); 
			break;
		case INTEGER_TOK:
			if (LEX_VERBOSE) printf("<integer, '%s'> ", yytext);
			yylval.int_value = atoi(yytext);
			break;
		case ADD_TOK:
			if (LEX_VERBOSE) printf("<add, '%s'> ", yytext);
			yylval.op = yytext[0];
			break;
		case SUB_TOK:
			if (LEX_VERBOSE) printf("<sub, '%s'> ", yytext);
			yylval.op = yytext[0];
			break;
		case MULT_TOK:
			if (LEX_VERBOSE) printf("<mult, '%s'> ", yytext);
			yylval.op = yytext[0];
			break;
		case DIV_TOK:
			if (LEX_VERBOSE) printf("<div, '%s'> ", yytext);
			yylval.op = yytext[0];
			break;
		case ASSIGN_TOK:
			if (LEX_VERBOSE) printf("<assign, '%s'> ", yytext);
			break;
		case PARENT_LEFT_TOK:
			if (LEX_VERBOSE) printf("<parent_left, '%s'> ", yytext);
			yylval.op = yytext[0];
			break;
		case PARENT_RIGHT_TOK:
			if (LEX_VERBOSE) printf("<parent_right, '%s'> ", yytext);
			yylval.op = yytext[0];
			break;
		case BRACK_LEFT_TOK:
			if (LEX_VERBOSE) printf("<brack_left, '%s'> ", yytext);
			yylval.op = yytext[0];
			break;
		case BRACK_RIGHT_TOK:
			if (LEX_VERBOSE) printf("<brack_right, '%s'> ", yytext);
			yylval.op = yytext[0];
			break;
		case SEMICOLON_TOK:
			if (LEX_VERBOSE) printf("<semicolon, '%s'> ", yytext);
			yylval.op = yytext[0];
			break;
		case COMMA_TOK:
			if (LEX_VERBOSE) printf("<comma, '%s'> ", yytext);
			break;
		case OR_OP_TOK:
			if (LEX_VERBOSE) printf("<or_op, '%s'> ", yytext);
			break;
		case AND_OP_TOK:
			if (LEX_VERBOSE) printf("<and_op, '%s'> ", yytext);
			break;
		case BOOLEAN_OP_TOK:
			if (LEX_VERBOSE) printf("<boolean_op, '%s'> ", yytext);
			break;
		case COMMENT_TOK:
			lex_line += 1;
			lex_column = 0; // reset column index 
			if (LEX_VERBOSE) {
				printf("<comment>");
				printf("\nline %d. ", lex_line);
			}
			break;
		case ID_TOK:;
			int idx = add_word(len_st(), strdup(yytext));
			if (LEX_VERBOSE) printf("<id, '%s', %d> ", yytext, idx);
			yylval.str_value = (char*) malloc(256); 
			strcpy(yylval.str_value, yytext);
			break;
		case NEWLINE_TOK:
			newline_counter += 1;
			lex_line += 1;
			lex_column = 0;  // reset column index 
			if (LEX_VERBOSE) printf("\nline %d. ", lex_line);
			break;
		case EOF_TOK:
			if (lex_line - 1 == newline_counter) if (LEX_VERBOSE) printf("EOF\n");
			break;
		case ERROR_TOK:
			printf("\nLexError: token '%s' is not recognized in line %d, column %d.\n",
			       yytext, lex_line, lex_column);
		default:
			break;  // ignore
	}
	lex_column += strlen(yytext);
}