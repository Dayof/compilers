/* tokens mapping */

%{
	#include <stdio.h>
	#include "uthash.h"

	enum TOKENS{
		ERROR=1,
		NEWLINE,
		WHITESPACE,
		ID,
		KEYWORD,
		INTEGER,
		FLOAT,
		OPERATOR,
		DELIMITER,
		BOOLEAN,
		BOOLEAN_OP,
		STRING,
		COMMENT
	};

	int line, column;

	struct word {
		int key;
		char name[50];
		UT_hash_handle hh; /* makes this structure hashable */
	};

	struct word *symbol_table = NULL;

	void add_word(int key, char *name) {
		struct word *s;
		HASH_FIND_INT(symbol_table, &key, s);
		if (s == NULL) {
			s = (struct word *) malloc(sizeof *s);
			s->key = key;
			HASH_ADD_INT(symbol_table, key, s);
		}
		strcpy(s->name, name);
	}

	struct word *find_word(int word_key) {
		struct word *s;

		HASH_FIND_INT(symbol_table, &word_key, s);
		return s;
	}

	void delete_word(struct word *s) {
		HASH_DEL(symbol_table, s);
		free(s);
	}

	void delete_all() {
		struct word *cur_word, *tmp;

		HASH_ITER(hh, symbol_table, cur_word, tmp) {
			HASH_DEL(symbol_table, cur_word);
			free(cur_word);
		}
	}

%}

	/* regex and token definition */

DIGIT			[0-9]
NDIGIT			[1-9]
LETTER			[a-zA-Z]
OPERATOR		("-"|"+"|"*"|"/")
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

("input"|"print"|"if"|"elif"|"else"|"return"|"def"|"for"|"while")	return KEYWORD;

	/* arithmetics expressions */

{INTEGER}															return INTEGER;
{FLOAT}																return FLOAT;
{OPERATOR}															return OPERATOR;
{DELIMITER}															return DELIMITER;

	/* conditional and booleans expressions */

{BOOLEAN}															return BOOLEAN;
{BOOLEAN_OP}														return BOOLEAN_OP;

	/* structure helpers */

#.*{NEWLINE}														return COMMENT;
{STRING}															return STRING;

	/* general */

{NEWLINE}															return NEWLINE;
{WHITESPACE}   														return WHITESPACE;
{VAR}																return ID;
.																	return ERROR;  /* any character but newline */

%%

/*
	Output example:
	- Command: sum_numbers = 1 + 1.0
	- Output: <id, 1> <delimiter, '='> <integer, '1'> <operator, '+'> <float, '1.0'> 
*/

void switcher(int token) {
	switch (token) {
		case ERROR:
			printf("\nLexerError: line %d, column %d, token '%s' is not recognized\n", line, column, yytext);
			break;
		case NEWLINE:
			line += 1;
			column = 0;  // reset column index 
			printf("\nline %d. ", line);
			break;
		case WHITESPACE:
			break;  // ignore
		case ID: ;
			int cur_key = HASH_COUNT(symbol_table) + 1;
			add_word(cur_key, yytext);
			printf(" <id, %d>", cur_key);
			break;
		case KEYWORD:
			printf(" <keyword, '%s'>", yytext);
			break;
		case STRING:
			printf(" <string, '%s'>", yytext);
			break;
		case DELIMITER:
			printf(" <delimiter, '%s'>", yytext);
			break;
		case OPERATOR:
			printf(" <operator, '%s'>", yytext);
			break;
		case BOOLEAN:
			printf(" <boolean, '%s'>", yytext);
			break;
		case BOOLEAN_OP:
			printf(" <boolean_op, '%s'>", yytext);
			break;
		case INTEGER:
			printf(" <integer, '%s'>", yytext);
			break;
		case FLOAT:
			printf(" <float, '%s'>", yytext);
			break;
		case COMMENT: ;
			char *comment = yytext;
			comment[strlen(comment) - 1] = 0;
			printf(" <comment, '%s'>", comment);
			line += 1;
			column = 0;  // reset column index 
			printf("\nline %d. ", line);
			break;
		default:
			printf("\nUndefined error.\n");
  	}
	column += strlen(yytext);
}

int main (int argc, char *argv[]) {
	line = column = 1;
	printf("CPPython interpreter:\n");
	yyin = fopen(argv[1], "r");
	int token;
	printf("\nline %d. ", line);
	while ((token = yylex()) != 0) switcher(token);
  	fclose(yyin);
	printf("\n");
	return 0;
}
