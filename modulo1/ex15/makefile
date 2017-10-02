#vars
INCLUDES = fill_array.h verify_condition.h
SOURCES = fill_array.c verify_condition.c main.c
OBJFILES = fill_array.o verify_condition.o main.o
EXEC = ex15

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