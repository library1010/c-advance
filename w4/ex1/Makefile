CC = gcc
CFLAGS = -g -std=c99

all: ex3

ex3: ex3.o extension_lib.o my_input_lib.o
	$(CC) ex3.o extension_lib.o my_input_lib.o -o ex3

ex3.o: ex3.c
	$(CC) $(CFLAGS) -c ex3.c -o ex3.o

extension_lib.o: extension_lib.c extension_lib.h
	$(CC) $(CFLAGS) -c extension_lib.c -o extension_lib.o

my_input_lib.o: my_input_lib.c my_input_lib.h
	$(CC) $(CFLAGS) -c my_input_lib.c -o my_input_lib.o

clean:
	rm -rf *.o *~ ex3