#ifndef __MAIN_H__
#define __MAIN_H__

int LEX_VERBOSE, PARSER_VERBOSE, MAIN_VERBOSE, SEMANTIC_VERBOSE,
    parser_line, parser_column, parser_error, semantic_error,
    lex_line, lex_column, lex_error, newline_counter;

int handle_token(int token);

#endif // __MAIN_H__