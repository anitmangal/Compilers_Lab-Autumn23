output.txt: analyzer test.c
	./analyzer < test.c > output.txt

analyzer: lex.yy.c
	gcc lex.yy.c -lfl -o analyzer

lex.yy.c: ass3_21CS10005.l
	flex ass3_21CS10005.l application.c

clean:
	rm analyzer lex.yy.c output.txt
