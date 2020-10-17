FILES	= parser.c lexer.c ast.c sym_tab.c main.c 
CFLAGS	= -g -Wall -pedantic -x c
CC		= gcc

cppython:	$(FILES) ast.h sym_tab.h
			$(CC) $(CFLAGS) $(FILES) -o cppython -lfl

lexer.c:	cppython.lex
			flex cppython.lex

parser.c:	cppython.y
			bison -d -v cppython.y

clean:
	rm -f *.o *~ lexer.c lexer.h parser.c parser.h parser.output cppython
