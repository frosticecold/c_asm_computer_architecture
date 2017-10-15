.section .data
 .global op32a
 .global op32b

 .section .text
  .global sum2ints
sum2ints:
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

    adc $0,%edx

    # epilogue

    movl %ebp,%esp
    popl %ebp

    # o retorno de 64 bits é
    # EDX:EAX
    # H:L
    ret 
    