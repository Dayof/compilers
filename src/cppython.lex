/* tokens mapping */

%{
	#include <stdio.h>
	#include "uthash.h"

	enum TOKENS{
		ERROR=1,
		RETURN_EXPR,
		NEWLINE,
		WHITESPACE,
		ID,
		INTEGER,
		FLOAT,
		STRING,
		DELIMITER,
		BOOLEAN,
		BOOLEAN_EXP,
		BOOLEAN_OP,
		FLOW,
		CONDITIONAL,
		FUNC,
		STRUCTURE,
		OPERATOR,
		INPUT,
		PRINT,
		LIST
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
LETTER			[a-zA-Z]
OPERATOR		("-"|"+"|"*"|"/")
DELIMITER		("="|"("|")"|";")
VAR				({LETTER}|"_")({LETTER}|{DIGIT}|"_")*
STRING			(\".*\"|\'.*\')
INTEGER			({DIGIT}+)
FLOAT			({DIGIT}+"."{DIGIT}*|"."{DIGIT}+)
NUMBER			(INTEGER|FLOAT)
ARGS			({TYPES}[","{TYPES}]*)
LIST			\[.*{ARGS}*.*\]
TYPES			[STRING|NUMBER|LIST]

%%

	/* read and write */

"input(".*{STRING}.*")"				return INPUT;
"print(".*{STRING}.*")"				return PRINT;

	/* functions */

"return".*{TYPES}					return RETURN_EXPR;
def.*{LETTER}*.*(.*).*:				return FUNC;

	/* arithmetics expressions */

{INTEGER}							return INTEGER;
{FLOAT}								return FLOAT;
{OPERATOR}							return OPERATOR;
{DELIMITER}							return DELIMITER;

	/* conditional and booleans expressions */

"if"|"elif"|"else"					return CONDITIONAL;
"True"|"False"						return BOOLEAN;
"and"|"or"|"not"					return BOOLEAN_EXP;
"=="|"<="|">="|"!="|"<"|">"			return BOOLEAN_OP;

	/* repetition */

"for"|"while"						return FLOW;

	/* structure helpers */

{STRING}							return STRING;
{LIST}								return LIST;

	/* general */
[\n]								return NEWLINE;
[ \t]+	     						return WHITESPACE;
{VAR}								return ID;
.									return ERROR;  /* any character but newline */

%%

/*
	Output example:
	- Command: sum_numbers = 1 + 1.0
	- Output: <id, 1> <delimiter, "="> <integer, "1"> <operator, "+"> <float, "1.0"> 
*/

void switcher(int token) {
	switch (token) {
		case NEWLINE:
			line += 1;
			column = 0;  // reset column index 
			printf("\nline %d. ", line);
			break;
		case RETURN_EXPR:
			printf(" <return, '%s'>", yytext);
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
		case BOOLEAN_EXP:
			printf(" <boolean_exp, '%s'>", yytext);
			break;
		case BOOLEAN_OP:
			printf(" <boolean_op, '%s'>", yytext);
			break;
		case FLOW:
			printf(" <boolean_op, '%s'>", yytext);
			break;
		case CONDITIONAL:
			printf(" <conditional, '%s'>", yytext);
			break;
		case FUNC:
			printf(" <func, '%s'>", yytext);
			break;
		case STRUCTURE:
			printf(" <structure, '%s'>", yytext);
			break;
		case INPUT:
			printf(" <input, '%s'>", yytext);
			break;
		case PRINT:
			printf(" <print, '%s'>", yytext);
			break;
		case LIST:
			printf(" <list, '%s'>", yytext);
			break;
		case INTEGER:
			printf(" <integer, '%s'>", yytext);
			break;
		case FLOAT:
			printf(" <float, '%s'>", yytext);
			break;
		case ID: ;
			int cur_key = HASH_COUNT(symbol_table) + 1;
			add_word(cur_key, yytext);
			printf(" <id, %d>", cur_key);
			break;
		case ERROR:
			printf("\nLexerError: line %d, column %d, token '%s' is not recognized\n", line, column, yytext);
			break;
		case WHITESPACE:
			break;  // ignore
		default:
			printf("\nUndefined error.\n");
  	}
	column += strlen(yytext);
}

int main (int argc, char *argv[]) {
	line = column = 1;
	printf("Python interpreter:\n");
	yyin = fopen(argv[1], "r");
	int token;
	printf("\nline %d. ", line);
	while ((token = yylex()) != 0) switcher(token);
  	fclose(yyin);
	printf("\n");
	return 0;
}
