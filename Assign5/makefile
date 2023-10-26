run: lex.yy.o asgn5_21CS10005_21CS30031.tab.o asgn5_21CS10005_21CS30031_translator.o
	g++ lex.yy.o asgn5_21CS10005_21CS30031.tab.o asgn5_21CS10005_21CS30031_translator.o

asgn5_21CS10005_21CS30031_translator.o: asgn5_21CS10005_21CS30031_translator.h asgn5_21CS10005_21CS30031_translator.cxx
	g++ -c asgn5_21CS10005_21CS30031_translator.h
	g++ -c asgn5_21CS10005_21CS30031_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

asgn5_21CS10005_21CS30031.tab.o: asgn5_21CS10005_21CS30031.tab.c
	g++ -c asgn5_21CS10005_21CS30031.tab.c

lex.yy.c: asgn5_21CS10005_21CS30031.l asgn5_21CS10005_21CS30031.tab.h asgn5_21CS10005_21CS30031_translator.h
	flex asgn5_21CS10005_21CS30031.l

asgn5_21CS10005_21CS30031.tab.c asgn5_21CS10005_21CS30031.tab.h: asgn5_21CS10005_21CS30031.y
	bison -dtv asgn5_21CS10005_21CS30031.y

testing: a.out
	mkdir -p ./test-outputs
	@echo "\ntest-inputs contains the test cases.\n"
	@echo "\nRunning test cases...\n"
	./a.out < test-inputs/asgn5_21CS10005_21CS30031_test1.c > test-outputs/asgn5_21CS10005_21CS30031_quads1.out
	@sleep 0.2
	./a.out < test-inputs/asgn5_21CS10005_21CS30031_test2.c > test-outputs/asgn5_21CS10005_21CS30031_quads2.out
	@sleep 0.2
	./a.out < test-inputs/asgn5_21CS10005_21CS30031_test3.c > test-outputs/asgn5_21CS10005_21CS30031_quads3.out
	@sleep 0.2
	./a.out < test-inputs/asgn5_21CS10005_21CS30031_test4.c > test-outputs/asgn5_21CS10005_21CS30031_quads4.out
	@sleep 0.2
	./a.out < test-inputs/asgn5_21CS10005_21CS30031_test5.c > test-outputs/asgn5_21CS10005_21CS30031_quads5.out
	@sleep 0.2

	@echo "\nTest cases run successfully.\n"
	@echo "\nCheck test-outputs folder for the outputs.\n"

clean:
	rm -f lex.yy.c *.tab.c *.tab.h *.output *.o a.out *.gch test-outputs/*_quads*.out
