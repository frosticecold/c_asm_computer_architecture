#vars
INCLUDES = even_number.h fill_vector.h
SOURCES = even_number.c fill_vector.c main.c
OBJFILES = even_number.o fill_vector.o main.o
EXEC = ex03
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