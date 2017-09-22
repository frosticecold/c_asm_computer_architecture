cc=gcc
flags=-Wall -g

main: identify_format.o main.o
	$(cc) $(flags) identify_format.o main.o -o ex07

identify_format.o: identify_format.c
	$(cc) $(flags) -c identify_format.c -o identify_format.o 
main.o: main.c
	$(cc) $(flags) -c main.c -o main.o
run: ex07
	./ex07
clean:
	rm *.o
