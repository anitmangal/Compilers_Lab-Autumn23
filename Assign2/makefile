output: a.out
	./a.out

a.out: main.c libmyl.a
	gcc main.c -L. -lmyl

libmyl.a: ass2_21CS10005.o
	ar rcs libmyl.a ass2_21CS10005.o

ass2_21CS10005.o: ass2_21CS10005.c myl.h
	gcc -c ass2_21CS10005.c

clean:
	rm -f ass2_21CS10005.o libmyl.a a.out