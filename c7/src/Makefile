FILES		= parser/parser.c lexer/lexer.c core/ast.c core/sym_tab.c core/scope.c core/main.c
CFLAGS		= -g -Wall -pedantic -x c
CFLAGS_MEM	= -g -Wall -pedantic -fsanitize=address -x c
CC			= gcc

c7:		$(FILES) core/ast.h core/sym_tab.h core/scope.h core/main.h
		$(CC) $(CFLAGS) $(FILES) -I core -I lexer -I parser -o c7 -lfl

lexer/lexer.c: lexer/c7.lex
	flex lexer/c7.lex

parser/parser.c: parser/c7.y
	# bison -d -v -Wcounterexamples parser/c7.y
	bison -d -v parser/c7.y

memory:	$(FILES) core/ast.h core/sym_tab.h core/scope.h core/main.h
		$(CC) $(CFLAGS_MEM) $(FILES) -I core -I lexer -I parser -o c7 -lfl

valgrind:
	@echo "Test file: ${TEST_FILE}"
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./c7 ${TEST_FILE}

clean:
	rm -f *.o *~ lexer/lexer.c lexer/lexer.h parser/parser.c parser/parser.h parser/parser.output logfile.out c7
