all: main.o hw10.o
	gcc -o hw10 main.o hw10.o

main.o: main.c hw10.h
	gcc -c main.c

products.o: hw10.c
	gcc -c hw10.c
