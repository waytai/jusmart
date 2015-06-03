CC = gcc
hole : hole.o
	$(CC) -o hole  hole.o
hole.o : hole.c apue.h
	$(CC) -c -g  hole.c apue.h
clean:
	rm hole *.o 

