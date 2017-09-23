#vars
INCLUDES = 
SOURCES = line.c multiplication_table.c multiplication_table_n.c main.c
OBJFILES = line.o multiplication_table.o multiplication_table_n.o main.o
EXEC = main

# regras de sufixo
.SUFIXES : .c .o

# como transformar um .c num .o ; $< --nome do ficheiro
# $< reads from the standard input

${EXEC} : ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES} : ${SOURCES} ${INCLUDES}

run: ${EXEC}
	./${EXEC}
clean:
	rm -f ${OBJFILES} ${EXEC}