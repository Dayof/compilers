#include "builder.h"


FILE *create_tac() {
    return fopen("runner.tac", "w+");
}

void write_table(FILE *fp_tac) {
    fprintf(fp_tac, ".table\n");

    for (word* cur_word = global_symbol_table; cur_word != NULL;
         cur_word = cur_word->hh.next) {
        if (cur_word->tag == ET_SOFT_DELETE ||
            cur_word->tag == ET_REF ||
            cur_word->scope_lvl == -1) continue;

        if (cur_word->id_type == ST_ID_VAR)
            fprintf(fp_tac, "\t%s %s\n", datatype2str(cur_word->data_type),
                    cur_word->name);
    }
}

void write_node_instruction(FILE *fp_tac, ast_node* elem) {
    if (elem == NULL) return;

    if (elem->tag == INTEGER_TYPE || elem->tag == FLOAT_TYPE) {
        fprintf(fp_tac, "\t%s", elem->code_instruc);
    } else if (elem->tag == CAST_TYPE) {
        write_node_instruction(fp_tac, elem->op.cast_expr.next);
    } else if (elem->tag == VAR_TYPE) {
        if (elem->code_instruc != NULL) fprintf(fp_tac, "\t%s", elem->code_instruc);
    } else if (elem->tag == WRITELN_TYPE || elem->tag == WRITE_TYPE) {
        write_node_instruction(fp_tac, elem->op.binary_expr.left);
        write_node_instruction(fp_tac, elem->op.binary_expr.right);
        fprintf(fp_tac, "\t%s", elem->code_instruc);
    } else if (elem->tag == BINARY_TYPE) {
        write_node_instruction(fp_tac, elem->op.binary_expr.left);
        write_node_instruction(fp_tac, elem->op.binary_expr.right);
    } else if (elem->tag == ASSIGN_TYPE || elem->tag == ADD_TYPE) {
        write_node_instruction(fp_tac, elem->op.ternary_expr.left);
        write_node_instruction(fp_tac, elem->op.ternary_expr.mid);
        write_node_instruction(fp_tac, elem->op.ternary_expr.right);
        fprintf(fp_tac, "\t%s", elem->code_instruc);
    } else if (elem->tag == TERNARY_TYPE) {
        write_node_instruction(fp_tac, elem->op.ternary_expr.left);
        write_node_instruction(fp_tac, elem->op.ternary_expr.mid);
        write_node_instruction(fp_tac, elem->op.ternary_expr.right);
    } else if (elem->tag == QUINARY_TYPE) {
        write_node_instruction(fp_tac, elem->op.quinary_expr.type);
        write_node_instruction(fp_tac, elem->op.quinary_expr.first_expr);
        write_node_instruction(fp_tac, elem->op.quinary_expr.second_expr);
        write_node_instruction(fp_tac, elem->op.quinary_expr.third_expr);
        write_node_instruction(fp_tac, elem->op.quinary_expr.fourth_expr);
    } else if (elem->tag == FUNC_TYPE || elem->tag == QUARTENARY_TYPE) {
        write_node_instruction(fp_tac, elem->op.quartenary_expr.type);
        write_node_instruction(fp_tac, elem->op.quartenary_expr.first_expr);
        write_node_instruction(fp_tac, elem->op.quartenary_expr.second_expr);
        write_node_instruction(fp_tac, elem->op.quartenary_expr.third_expr);
    }
}


void write_code(FILE *fp_tac) {
    fprintf(fp_tac, ".code\nmain:\n");
    
    ast_list* cur_ast = ast_root;
    while (cur_ast) {
        ast_list* tmp_cur_ast = cur_ast;
        write_node_instruction(fp_tac, tmp_cur_ast->elem);
        cur_ast = tmp_cur_ast->next;
    }
}


void close_tac(FILE *fp_tac) {
    fclose(fp_tac);
}
