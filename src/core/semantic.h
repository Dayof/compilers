#ifndef __SEMANTIC_H__
#define __SEMANTIC_H__

#include "ast.h"

int semantic_warning;

int find_type(ast_node* expr, int type);

#endif // __SEMANTIC_H__