#vars
INCLUDES = student.h find_greater.h save_grades.h
SOURCES = find_greater.s save_grades.s main.c
OBJFILES = find_greater.o save_grades.o main.o
EXEC = main

# regras de sufixo
.SUFIXES : .c .o .s

# como transformar um .c num .o ; $< --nome do ficheiro
.c.o:
	gcc -Wall -g -c $<

# como transformar um .s num .o ; $< --nome do ficheiro
.s.o:
	gcc -Wall -g -c $<

${EXEC} : ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES} : ${SOURCES} ${INCLUDES}

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}

vg:
	valgrind ./${EXEC}