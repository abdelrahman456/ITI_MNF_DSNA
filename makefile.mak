#make rule to generate the final binary
all: dsa_test
#	@dsa_test.exe

dsa_test: main.o C_Array/C_array.o
	gcc main.o C_array.o -o dsa_test.exe

main.o: main.c array.c
	gcc -c main.c

array.o: array.c
	gcc -c array.c

C_Array/C_array.o: C_Array/C_array.c
	@cd C_Array && gcc -c C_array.c