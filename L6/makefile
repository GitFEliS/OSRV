all: main

main: main.o
	gcc main.o -o lab6

debug: debug.o
	gcc debug.o -o lab6 debug

debug.o: main.c
	gcc -g -c main.c -o debug.o

main.o:
	gcc -c main.c

clean:
	rm -rf *.o lab6 lab6_debug