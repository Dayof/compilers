FILES	= parser/parser.c lexer/lexer.c core/ast.c core/sym_tab.c core/main.c 
CFLAGS	= -g -Wall -pedantic -x c
CC		= gcc

cppython:	$(FILES) core/ast.h core/sym_tab.h
			$(CC) $(CFLAGS) $(FILES) -I core -I lexer -I parser -o cppython -lfl

lexer/lexer.c:	lexer/cppython.lex
				flex lexer/cppython.lex

parser/parser.c:	parser/cppython.y
					bison -d -v parser/cppython.y

clean:
	rm -f *.o *~ lexer/lexer.c lexer/lexer.h parser/parser.c parser/parser.h parser/parser.output cppython
