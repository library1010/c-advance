CC = gcc
CFLAGS = -g -std=c99

all: ex2

ex2: ex2.o extension_lib.o my_input_lib.o generic_lib.o file_handle.o symbol_table_jval.o my_jval_util.o libfdr.a
	$(CC) ex2.o extension_lib.o my_input_lib.o generic_lib.o file_handle.o symbol_table_jval.o my_jval_util.o libfdr.a -o ex2

ex2.o: ex2.c
	$(CC) $(CFLAGS) -c ex2.c -o ex2.o

extension_lib.o: extension_lib.c extension_lib.h
	$(CC) $(CFLAGS) -c extension_lib.c -o extension_lib.o



generic_lib.o: generic_lib.c generic_lib.h
	$(CC) $(CFLAGS) -c generic_lib.c -o generic_lib.o

file_handle.o: file_handle.c file_handle.h
	$(CC) $(CFLAGS) -c file_handle.c -o file_handle.o

symbol_table_jval.o: symbol_table_jval.c symbol_table_jval.h
	$(CC) $(CFLAGS) -c symbol_table_jval.c -o symbol_table_jval.o

my_jval_util.o: my_jval_util.c my_jval_util.h
	$(CC) $(CFLAGS) -c my_jval_util.c -o my_jval_util.o

my_input_lib.o: my_input_lib.c my_input_lib.h
	$(CC) $(CFLAGS) -c my_input_lib.c -o my_input_lib.o

clean:
	rm -rf *.o *~ ex2