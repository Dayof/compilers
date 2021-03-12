#ifndef __MAIN_H__
#define __MAIN_H__

int LEX_VERBOSE, PARSER_VERBOSE, MAIN_VERBOSE, parser_line, parser_column,
    lex_line, lex_column, newline_counter;

void handle_token(int token);

#endif // __MAIN_H__