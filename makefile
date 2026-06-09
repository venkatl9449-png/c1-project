all: main

main: main.o big3.o fact.o pal.o
	gcc -o main main.o big3.o fact.o pal.o

main.o: main.c big3.h fact.h pal.h
	gcc -c main.c

big3.o: big3.c big3.h
	gcc -c big3.c

fact.o: fact.c fact.h
	gcc -c fact.c

pal.o: pal.c pal.h
	gcc -c pal.c

clean:
	rm -f *.o main

