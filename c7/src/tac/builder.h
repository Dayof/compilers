#ifndef __TAC_BUILDER_H__
#define __TAC_BUILDER_H__

#include <stdio.h>
#include "sym_tab.h"

FILE *create_tac();

void close_tac(FILE *fp_tac);

void write_table(FILE *fp_tac);
void write_code(FILE *fp_tac);

void write_node_instruction(FILE *fp_tac, ast_node* elem);

#endif // __TAC_BUILDER_H__