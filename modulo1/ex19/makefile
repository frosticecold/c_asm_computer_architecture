#vars
INCLUDES = find_word.h c_low_to_upper.h
SOURCES = find_word.c c_low_to_upper.c main.c
OBJFILES = find_word.o c_low_to_upper.o main.o
EXEC = ex19

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