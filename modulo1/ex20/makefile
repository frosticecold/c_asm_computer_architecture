#vars
INCLUDES = find_all_words.h find_word.h c_low_to_upper.h
SOURCES = find_all_words.c find_word.c c_low_to_upper.c main.c
OBJFILES = find_all_words.o find_word.o c_low_to_upper.o main.o
EXEC = ex20

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