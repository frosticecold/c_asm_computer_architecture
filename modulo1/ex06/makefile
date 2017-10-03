#vars
INCLUDES = power_ref.h
SOURCES = power_ref.c main.c
OBJFILES = power_ref.o main.o
EXEC = ex06

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