#vars
INCLUDES = compress_shorts.h
SOURCES = compress_shorts.c main.c
OBJFILES = compress_shorts.o main.o
EXEC = ex18

# regras de sufixo
.SUFIXES : .c .o

# como transformar um .c num .o ; $< --nome do ficheiro
# $< reads from the standard input
.c.o:
	gcc -Wall -g -c $<

${EXEC} : ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES} : ${SOURCES} ${INCLUDES}

run: ${EXEC}
	./${EXEC}
clean:
	rm -f ${OBJFILES} ${EXEC}