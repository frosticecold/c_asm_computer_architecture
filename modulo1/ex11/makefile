#vars
INCLUDES = palindrome.h c_low_to_upper.h
SOURCES = palindrome.c c_low_to_upper.c main.c
OBJFILES = palindrome.o c_low_to_upper.o main.o
EXEC = ex11

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