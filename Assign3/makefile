output.txt: analyzer ass3_21CS10005_21CS30031_test.c
	./analyzer < ass3_21CS10005_21CS30031_test.c > output.txt

analyzer: lex.yy.c
	gcc lex.yy.c -lfl -o analyzer

lex.yy.c: ass3_21CS10005_21CS30031.l
	flex ass3_21CS10005_21CS30031.l ass3_21CS10005_21CS30031.c

clean:
	rm -f analyzer lex.yy.c output.txt
