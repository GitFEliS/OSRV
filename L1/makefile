all: hello
hello: main.o
	gcc main.o -o label
debug: debug.o
	gcc debug.o -o lab1_debug
debug.o: main.c
	gcc -g -c main.c -o debug.o
main.o:
	gcc -c main.c
clean:
	rm -rf *.o lab1 lab1_debug