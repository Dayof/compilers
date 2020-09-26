%{
	#define	KEYWORD 1
	#define OPERATOR 2
	#define DELIMETER 3
	#define TAB 4
	#define NL 5
	#define INT 6
%}

/* patterns definition (regex) */

%%

	/* read and write */

"input"		return KEYWORD;
"print"		return KEYWORD;

	/* conditional and booleans expressions */

"if"		return KEYWORD;
"elif"		return KEYWORD;
"else"		return KEYWORD;
"not"		return KEYWORD;
"and"		return KEYWORD;
"or"		return KEYWORD;
"=="		return OPERATOR;
"!="		return OPERATOR;
"<="		return OPERATOR;
">="		return OPERATOR;
[<]			return OPERATOR;
[>]			return OPERATOR;

	/* repetition */

"while"		return KEYWORD;
"for"		return KEYWORD;

	/* functions */

"def"		return KEYWORD;
"return"	return KEYWORD;

	/* arithmetics expressions */

[*]			return OPERATOR;
[-]			return OPERATOR;
[+]			return OPERATOR;
[/]			return OPERATOR;
[=]			return DELIMETER;
[,]			return DELIMETER;
"("     	return DELIMETER;
")"			return DELIMETER;

	/* structure helpers */

":"			return DELIMETER;
"["			return DELIMETER;
"]"			return DELIMETER;
"{"     	return DELIMETER;
"}"			return DELIMETER;
"'"			return DELIMETER;
"."			return DELIMETER;
";"			return DELIMETER;

	/* general */

[\t]		return TAB;		
[\n]        return NL;			
" "			;

	/* data types */

[0-9]+		return INT;


%%

int main() {
	printf("Python SPECIAL\n");
	int token;
	while ((token = yylex()) != 0) {
		printf("Token: %d\n", token);
	}
  	return 0;
}

void yyerror(const char *s) {
    printf("yyerror has: %s", s);
}