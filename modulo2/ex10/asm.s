.section .data
 .global op32a
 .global op32b

 .section .text
  .global sum2intscheck
sum2intscheck:
    # prologue
    pushl %ebp
    movl %esp,%ebp

    # inicializar tudo a zero
    movl $0,%eax
    movl $0,%ebx
    movl $0,%ecx
    movl $0,%edx
 
    movl op32a,%eax
    addl op32b,%eax


    jo com_overflow
    jc com_carry
    jmp fim


com_overflow:
    movl $-1,%eax
    jmp fim
com_carry:
    movl $-2,%eax
    jmp fim
fim:

    # epilogue

    movl %ebp,%esp
    popl %ebp

    # o retorno de 64 bits é
    # EDX:EAX
    # H:L
    ret 
