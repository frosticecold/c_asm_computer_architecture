#vars
INCLUDES = student.h save_data.h change_address.h
SOURCES = save_data.c change_address.s main.c
OBJFILES = save_data.o change_address.o main.o
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