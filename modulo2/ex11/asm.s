.section .data
 .global op32a
 .global op32b

 .section .text
  .global isMultiple
isMultiple:
    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl $0,%edx

    movl op32a,%eax
    movl op32b,%ebx
    idiv %ebx

    # comparar se é divisor
    cmp $0,%edx
    je edivisor
    jmp naoedivisor
    jmp fim

edivisor:
    movl $1,%eax
    jmp fim

naoedivisor:
    movl $0,%eax
    jmp fim

fim:
    # epilogue

    movl %ebp,%esp
    popl %ebp

    # o retorno de 64 bits é
    # EDX:EAX
    # H:L
    ret 
