CC = gcc
myapp: program.o bill.o fred.o
	$(CC) -g -o wei program.o bill.o fred.o
program.o : program.c lib.h
bill.o : bill.c
fred.o : fred.c
clean :
	rm  wei *.o

