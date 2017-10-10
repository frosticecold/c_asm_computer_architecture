#vars
INCLUDES = asm.h
SOURCES = asm.s main.c
OBJFILES = asm.o main.o
EXEC = ex01

# regras de sufixo
.SUFIXES : .c .o .s

# como transformar um .c num .o ; $< --nome do ficheiro
# $< reads from the standard input

${EXEC} : ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES} : ${SOURCES} ${INCLUDES}

run: ${EXEC}
	./${EXEC}
clean:
	rm -f ${OBJFILES} ${EXEC}