CC=gcc
FLAGS= -Wall -g

all: connections

connections: main.o my_mat.o
	$(CC) $(FLAGS) -o connections main.o my_mat.o

main.o: main.c
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

.PHONY: clean
clean:
	rm -f *.o 