FILES	= lexer/lexer.c core/main.c
CFLAGS	= -g -Wall -pedantic -x c
CC		= gcc

c7:		$(FILES) core/main.h
		$(CC) $(CFLAGS) $(FILES) -I core -I lexer -o c7 -lfl

lexer/lexer.c: lexer/c7.lex
	flex lexer/c7.lex

valgrind:
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./c7

clean:
	rm -f *.o *~ lexer/lexer.c lexer/lexer.h logfile.out c7
