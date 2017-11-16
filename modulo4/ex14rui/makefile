#vars
INCLUDES = asm.h join_bits.h mixedsum.h
SOURCES = asm.s mixedsum.s join_bits.c main.c
OBJFILES = asm.o mixedsum.o join_bits.o main.o
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

debug: ${EXEC}
	gdb -tui ${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}