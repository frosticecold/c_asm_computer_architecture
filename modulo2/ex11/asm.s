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

    # so vai ser divisor se o resto for 0
    # o resto encontra-se em %edx
    # comparar se é divisor
    cmp $0,%edx
    je edivisor
    jmp naoedivisor

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

    ret 
