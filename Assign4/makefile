run : parser asgn4_21CS10005_21CS30031_test.c
	./parser < asgn4_21CS10005_21CS30031_test.c > asgn4_21CS10005_21CS30031_output.txt

parser : lex.yy.o y.tab.o asgn4_21CS10005_21CS30031_main.o
	gcc lex.yy.o y.tab.o asgn4_21CS10005_21CS30031_main.o -lfl -o parser

asgn4_21CS10005_21CS30031_main.o : _asgn4_21CS10005_21CS30031_main.c y.tab.h
	gcc -c asgn4_21CS10005_21CS30031_main.c

lex.yy.o : lex.yy.c
	gcc -c lex.yy.c

y.tab.o : y.tab.c
	gcc -c y.tab.c

lex.yy.c : asgn4_21CS10005_21CS30031.l y.tab.h
	flex asgn4_21CS10005_21CS30031.l

y.tab.c y.tab.h: asgn4_21CS10005_21CS30031.y
	bison -y -t -d --report=all asgn4_21CS10005_21CS30031.y

clean :
	rm -f lex.yy.c y.tab.* *.o parser output.txt y.output
