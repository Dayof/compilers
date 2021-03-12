FILES	= lexer/lexer.c core/sym_tab.c core/main.c
CFLAGS	= -g -Wall -pedantic -x c
CC		= gcc

c7:		$(FILES) core/main.h core/sym_tab.h
		$(CC) $(CFLAGS) $(FILES) -I core -I lexer -o c7 -lfl

lexer/lexer.c: lexer/c7.lex
	flex lexer/c7.lex

valgrind:
	@echo "Test file: ${TEST_FILE}"
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./c7 ${TEST_FILE}

clean:
	rm -f *.o *~ lexer/lexer.c lexer/lexer.h logfile.out c7
