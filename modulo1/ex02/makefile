#vars
INCLUDES = string_to_int.h fill_vector.h
SOURCES = string_to_int.c fill_vector.c main.c
OBJFILES = string_to_int.o fill_vector.o main.o
EXEC = ex02
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