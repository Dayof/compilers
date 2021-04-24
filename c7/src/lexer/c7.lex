/* tokens mapping */

%{
	#include <stdio.h>
	#include <string.h>
	#include "main.h"
	#include "sym_tab.h"
	#include "ast.h"
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
		IS_SET_TOK,
		ADD_SET_TOK,
		REMOVE_TOK,
		EXISTS_TOK,
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
		EQ_OP_TOK,
		GE_OP_TOK,
		LE_OP_TOK,
		NE_OP_TOK,
		G_OP_TOK,
		L_OP_TOK,
		NEWLINE_TOK,
		WHITESPACE_TOK,
		ID_TOK
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
EQ_OP			("==")
GE_OP			(">=")
LE_OP			("<=")
NE_OP			("!=")
G_OP			(">")
L_OP			("<")
ID				({LETTER}|"_")({LETTER}|{DIGIT}|"_")*
STRING			(\"([^(\"\')])*\")
CHAR			(\'(.|\\a|\\b|\\f|\\n|\\r|\\t|\\v|\\\\|\\\'|\\\"|\\\?)\')
INTEGER			({NDIGIT}{DIGIT}*|"0")
FLOAT			({DIGIT}+\.{DIGIT}+)
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
IS_SET			("is_set")
ADD_SET 		("add")
REMOVE			("remove")
EXISTS			("exists")
EMPTY			("EMPTY")
COMMENT			("//".*)

%%

	/* reserved keywords */

{TYPE}			{ handle_token(TYPE_TOK); return TYPE; };
{IF}			{ handle_token(IF_TOK); return IF; };
{ELSE}			{ handle_token(ELSE_TOK); return ELSE; };
{FOR}			{ handle_token(FOR_TOK); return FOR; };
{FORALL}		{ handle_token(FORALL_TOK); return FORALL; };
{RETURN}		{ handle_token(RETURN_TOK); return RETURN; };
{READ}			{ handle_token(READ_TOK); return READ; };
{WRITE}			{ handle_token(WRITE_TOK); return WRITE; };
{WRITELN}		{ handle_token(WRITELN_TOK); return WRITELN; };
{IN}			{ handle_token(IN_TOK); return IN; };
{IS_SET}		{ handle_token(IS_SET_TOK); return IS_SET; };
{ADD_SET}		{ handle_token(ADD_SET_TOK); return ADD_SET; };
{REMOVE}		{ handle_token(REMOVE_TOK); return REMOVE; };
{EXISTS}		{ handle_token(EXISTS_TOK); return EXISTS; };
{EMPTY}			{ handle_token(EMPTY_TOK); return EMPTY; };

	/* conditional and booleans expressions */

{EQ_OP}			{ handle_token(EQ_OP_TOK); return EQ_OP; };
{NOT_OP}		{ handle_token(NOT_OP_TOK); return NOT_OP; };
{GE_OP}			{ handle_token(GE_OP_TOK); return GE_OP; };
{LE_OP}			{ handle_token(LE_OP_TOK); return LE_OP; };
{NE_OP}			{ handle_token(NE_OP_TOK); return NE_OP; };
{G_OP}			{ handle_token(G_OP_TOK); return G_OP; };
{L_OP}			{ handle_token(L_OP_TOK); return L_OP; };
{OR_OP}			{ handle_token(OR_OP_TOK); return OR_OP; };
{AND_OP}		{ handle_token(AND_OP_TOK); return AND_OP; };

	/* arithmetic expressions */

{FLOAT}			{ handle_token(FLOAT_TOK); return FLOAT; };
{INTEGER}		{ handle_token(INTEGER_TOK); return INTEGER; };
{ADD}			{ handle_token(ADD_TOK); return ADD; };
{SUB}			{ handle_token(SUB_TOK); return SUB; };
{MULT}			{ handle_token(MULT_TOK); return MULT; };
{DIV}			{ handle_token(DIV_TOK); return DIV; };
{ASSIGN}		{ handle_token(ASSIGN_TOK); return ASSIGN; };
{PARENT_LEFT}	{ handle_token(PARENT_LEFT_TOK); return PARENT_LEFT; };
{PARENT_RIGHT}	{ handle_token(PARENT_RIGHT_TOK); return PARENT_RIGHT; };
{BRACK_LEFT}	{ handle_token(BRACK_LEFT_TOK); return BRACK_LEFT; };
{BRACK_RIGHT}	{ handle_token(BRACK_RIGHT_TOK); return BRACK_RIGHT; };
{SEMICOLON}		{ handle_token(SEMICOLON_TOK); return SEMICOLON; };
{COMMA}			{ handle_token(COMMA_TOK); return COMMA; };

	/* structure helpers */

{COMMENT}{NEWLINE} { handle_token(COMMENT_TOK); };														;
{STRING}		   { handle_token(STRING_TOK); return STRING; };
{CHAR}			   { handle_token(CHAR_TOK); return CHAR; };

	/* general */

{NEWLINE}		{ handle_token(NEWLINE_TOK); };
{WHITESPACE}   	{ lex_column += strlen(yytext); }													;
{ID}			{ handle_token(ID_TOK); return ID; };
.				{ handle_token(ERROR_TOK); };  /* any character but newline */

%%

char handle_char(char yytext_char) {
	char ascii_char;
	switch (yytext_char) {
		case 'a':
			ascii_char = 7;
			break;
		case 'b':
			ascii_char = 8;
			break;
		case 'f':
			ascii_char = 12;
			break;
		case 'n':
			ascii_char = 10;
			break;
		case 'r':
			ascii_char = 13;
			break;
		case 't':
			ascii_char = 9;
			break;
		case 'v':
			ascii_char = 11;
			break;
		case '\\':
			ascii_char = 92;
			break;
		case '\'':
			ascii_char = 39;
			break;
		case '\"':
			ascii_char = 34;
			break;
		case '?':
			ascii_char = 63;
			break;
		default:
			break;  // ignore
	}
	return ascii_char;
}

/*
	Output example:
	- Command: sum_numbers = 1 + 1.0;
	- Output: <id, 'sum_numbers'> <delimiter, '='> <integer, '1'> <add, '+'> <float, '1.0'> <semicolon, ';'> 
*/

void handle_token(int token) {
	int keylen;
	switch (token) {
		case STRING_TOK:
			if (LEX_VERBOSE) printf("<string, '%s'> ", yytext);
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*));
			strcpy(yylval.str_value, yytext);
			break;
		case CHAR_TOK:
			if (LEX_VERBOSE) printf("<char, %s> ", yytext);
			if (strlen(yytext) == 3) yylval.char_value = (char) *(yytext + 1);
			else yylval.char_value = handle_char((char) *(yytext + 2));
			break;
		case TYPE_TOK:
			if (LEX_VERBOSE) printf("<type, '%s'> ", yytext);
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*));
			strcpy(yylval.str_value, yytext);
			break;
		case IF_TOK:
			if (LEX_VERBOSE) printf("<if> ");
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*));
			strcpy(yylval.str_value, yytext);
			break;
		case ELSE_TOK:
			if (LEX_VERBOSE) printf("<else> ");
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*));
			strcpy(yylval.str_value, yytext);
			break;
		case FOR_TOK:
			if (LEX_VERBOSE) printf("<for> ");
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*));
			strcpy(yylval.str_value, yytext);
			break;
		case FORALL_TOK:
			if (LEX_VERBOSE) printf("<forall> ");
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*));
			strcpy(yylval.str_value, yytext);
			break;
		case RETURN_TOK:
			if (LEX_VERBOSE) printf("<return> ");
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*)); 
			strcpy(yylval.str_value, yytext);
			break;
		case READ_TOK:
			if (LEX_VERBOSE) printf("<read> ");
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*)); 
			strcpy(yylval.str_value, yytext);
			break;
		case WRITE_TOK:
			if (LEX_VERBOSE) printf("<write> ");
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*)); 
			strcpy(yylval.str_value, yytext);
			break;
		case WRITELN_TOK:
			if (LEX_VERBOSE) printf("<writeln> ");
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*)); 
			strcpy(yylval.str_value, yytext);
			break;
		case IN_TOK:
			if (LEX_VERBOSE) printf("<in> ");
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*)); 
			strcpy(yylval.str_value, yytext);
			break;
		case IS_SET_TOK:
			if (LEX_VERBOSE) printf("<is_set> ");
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*)); 
			strcpy(yylval.str_value, yytext);
			break;
		case ADD_SET_TOK:
			if (LEX_VERBOSE) printf("<add> ");
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*)); 
			strcpy(yylval.str_value, yytext);
			break;
		case REMOVE_TOK:
			if (LEX_VERBOSE) printf("<remove> ");
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*)); 
			strcpy(yylval.str_value, yytext);
			break;
		case EXISTS_TOK:
			if (LEX_VERBOSE) printf("<exists> ");
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*)); 
			strcpy(yylval.str_value, yytext);
			break;
		case EMPTY_TOK:
			if (LEX_VERBOSE) printf("<EMPTY> ");
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*)); 
			strcpy(yylval.str_value, yytext);
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
			yylval.char_value = (char) *(yytext);
			break;
		case SUB_TOK:
			if (LEX_VERBOSE) printf("<sub, '%s'> ", yytext);
			yylval.char_value = (char) *(yytext);
			break;
		case MULT_TOK:
			if (LEX_VERBOSE) printf("<mult, '%s'> ", yytext);
			yylval.char_value = (char) *(yytext);
			break;
		case DIV_TOK:
			if (LEX_VERBOSE) printf("<div, '%s'> ", yytext);
			yylval.char_value = (char) *(yytext);
			break;
		case ASSIGN_TOK:
			if (LEX_VERBOSE) printf("<assign, '%s'> ", yytext);
			yylval.char_value = (char) *(yytext);
			break;
		case PARENT_LEFT_TOK:
			if (LEX_VERBOSE) printf("<parent_left, '%s'> ", yytext);
			yylval.char_value = (char) *(yytext);
			break;
		case PARENT_RIGHT_TOK:
			if (LEX_VERBOSE) printf("<parent_right, '%s'> ", yytext);
			yylval.char_value = (char) *(yytext);
			break;
		case BRACK_LEFT_TOK:
			if (LEX_VERBOSE) printf("<brack_left, '%s'> ", yytext);
			yylval.char_value = (char) *(yytext);
			break;
		case BRACK_RIGHT_TOK:
			if (LEX_VERBOSE) printf("<brack_right, '%s'> ", yytext);
			yylval.char_value = (char) *(yytext);
			break;
		case SEMICOLON_TOK:
			if (LEX_VERBOSE) printf("<semicolon, '%s'> ", yytext);
			yylval.char_value = (char) *(yytext);
			break;
		case COMMA_TOK:
			if (LEX_VERBOSE) printf("<comma, '%s'> ", yytext);
			yylval.char_value = (char) *(yytext);
			break;
		case OR_OP_TOK:
			if (LEX_VERBOSE) printf("<or_op, '%s'> ", yytext);
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*)); 
			strcpy(yylval.str_value, yytext);
			break;
		case AND_OP_TOK:
			if (LEX_VERBOSE) printf("<and_op, '%s'> ", yytext);
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*)); 
			strcpy(yylval.str_value, yytext);
			break;
		case NOT_OP_TOK:
			if (LEX_VERBOSE) printf("<not_op>, '%s'> ", yytext);
			yylval.char_value = (char) *(yytext);
			break;
		case EQ_OP_TOK:
			if (LEX_VERBOSE) printf("<eq_op>, '%s'> ", yytext);
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*)); 
			strcpy(yylval.str_value, yytext);
			break;
		case GE_OP_TOK:
			if (LEX_VERBOSE) printf("<ge_op>, '%s'> ", yytext);
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*)); 
			strcpy(yylval.str_value, yytext);
			break;
		case LE_OP_TOK:
			if (LEX_VERBOSE) printf("<le_op>, '%s'> ", yytext);
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*)); 
			strcpy(yylval.str_value, yytext);
			break;
		case NE_OP_TOK:
			if (LEX_VERBOSE) printf("<ne_op>, '%s'> ", yytext);
			keylen = strlen(yytext) + 1;
			yylval.str_value = (char*) malloc(keylen * sizeof(char*)); 
			strcpy(yylval.str_value, yytext);
			break;
		case G_OP_TOK:
			if (LEX_VERBOSE) printf("<g_op>, '%s'> ", yytext);
			yylval.char_value = (char) *(yytext);
			break;
		case L_OP_TOK:
			if (LEX_VERBOSE) printf("<l_op>, '%s'> ", yytext);
			yylval.char_value = (char) *(yytext);
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
			char *yytext_p = strdup(yytext);
			int idx = add_word(len_st(), yytext_p, lex_line, lex_column);
			free(yytext_p);
			if (LEX_VERBOSE) printf("<id, '%s', %d> ", yytext, idx);
			yylval.int_value = idx;
			break;
		case NEWLINE_TOK:
			newline_counter += 1;
			parser_column = lex_column; 
			lex_line += 1;
			parser_line = lex_line;
			lex_column = 0;  // reset column index 
			if (LEX_VERBOSE) printf("\nline %d. ", lex_line);
			break;
		case ERROR_TOK:
			lex_error += 1;
			printf("\nLexError: token '%s' is not recognized in line %d, column %d.\n",
				   yytext, lex_line, lex_column);
		default:
			break;  // ignore
	}
	lex_column += strlen(yytext);
	parser_column = lex_column;
}