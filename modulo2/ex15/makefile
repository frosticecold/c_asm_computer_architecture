#vars
INCLUDES = sum.h subtract.h multiply.h divide.h modulus.h
SOURCES = sum.s subtract.s multiply.s divide.s modulus.s main.c
OBJFILES = sum.o subtract.o multiply.o divide.o modulus.o main.o
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