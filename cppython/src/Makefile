FILES	= parser/parser.c lexer/lexer.c core/semantic.c core/ast.c core/sym_tab.c core/main.c
CFLAGS	= -g -Wall -pedantic -x c
CC		= gcc

cppython:			$(FILES) core/semantic.h core/ast.h core/sym_tab.h
					$(CC) $(CFLAGS) $(FILES) -I core -I lexer -I parser -o cppython -lfl

lexer/lexer.c: lexer/cppython.lex
	flex lexer/cppython.lex

parser/parser.c: parser/cppython.y
	bison -d -v parser/cppython.y

valgrind:
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./cppython

clean:
	rm -f *.o *~ lexer/lexer.c lexer/lexer.h parser/parser.c parser/parser.h parser/parser.output logfile.out cppython
