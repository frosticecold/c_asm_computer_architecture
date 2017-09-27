#vars
INCLUDES = array_sort.h sort_without_reps.h
SOURCES = array_sort.c sort_without_reps.c main.c
OBJFILES = array_sort.o sort_without_reps.o main.o
EXEC = ex09

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