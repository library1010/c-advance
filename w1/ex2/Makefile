CC=gcc
CFLAGS= -g -std=c99

all: ex2

ex2: ex2.o sort_lib.o my_input_lib.o extension_lib.o
	$(CC) ex2.o sort_lib.o my_input_lib.o extension_lib.o -o ex2

ex2.o: ex2.c
	$(CC) $(CFLAGS) -c ex2.c -o ex2.o

sort_lib.o: sort_lib.c sort_lib.h
	$(CC) $(CFLAGS) -c sort_lib.c -o sort_lib.o

my_input_lib.o: my_input_lib.c my_input_lib.h
	$(CC) $(CFLAGS) -c my_input_lib.c -o my_input_lib.o

extension_lib.o: extension_lib.c extension_lib.h
	$(CC) $(CFLAGS) -c extension_lib.c -o extension_lib.o

clean:
	rm -rf *.o ex2