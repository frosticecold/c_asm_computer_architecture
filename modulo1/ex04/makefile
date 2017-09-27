#vars
INCLUDES = c_low_to_upper.h
SOURCES = c_low_to_upper.c main.c
OBJFILES = c_low_to_upper.o main.o
EXEC = ex04

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