all: do_thing

do_thing: func.so main.o
	gcc -o lab2 main.o -L./ -l:func.so

debug: debug.o
	gcc debug.o -o lab2_debug

debug.o: main.c
	gcc -g -c main.c -o debug.o

main.o:
	gcc -c main.c

funk.so: func.o
	gcc -shared -o func.so functions.o
	gcc -shared -o /lib/func.so functions.o

func.o:
	gcc -c functions.c

clean:
	rm -rf *.o lab2 lab2_debug func.so /lib/func.so