#vars
INCLUDES = find_character.h
SOURCES = find_character.c main.c
OBJFILES = find_character.o main.o
EXEC = ex13

# regras de sufixo
.SUFIXES : .c .o

.c.o:
	gcc -Wall -g -c $<

# como transformar um .c num .o ; $< --nome do ficheiro
# $< reads from the standard input

${EXEC} : ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES} : ${SOURCES} ${INCLUDES}

run: ${EXEC}
	./${EXEC}
clean:
	rm -f ${OBJFILES} ${EXEC}