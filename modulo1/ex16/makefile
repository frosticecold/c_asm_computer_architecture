# exemplo de makefile com variaveis
# variaveis
INCLUDES = where_exists.h
SOURCES = where_exists.c main.c
OBJFILES = where_exists.o main.o
EXEC = ex16
# regras de sufixo
.SUFFIXES : .c .o
# como transformar um .c num .o ; $< -- nome do ficheiro
.c.o:
	gcc -Wall -g -c $<

${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES}: ${SOURCES} ${INCLUDES}

run:  ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}