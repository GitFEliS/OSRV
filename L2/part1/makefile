all: hello

hello: main.o
	gcc main.o -o lab2

debug: debug.o
	gcc debug.o -o lab2_debug

debug.o: main.c
	gcc -g -c main.c -o debug.o

main.o:
	gcc -c main.c

clean:
	rm -rf *.o lab2 lab2_debug