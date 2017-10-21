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
    idivl %ebx

    # so vai ser divisor se o resto for 0
    # o resto encontra-se em %edx
    # comparar se é divisor
    cmp $0,%edx
    je edivisor
    jmp naoedivisor

edivisor:
    movl $1,%eax
    jmp output

naoedivisor:
    movl $0,%eax
    jmp output

output:
    jo o_overflow
    jmp fim

o_carry:
    mov $0,%eax
    mov $0,%edx
    jo o_overflow
    jmp fim

o_overflow:
    mov $0,%eax
    mov $0,%edx
    jmp fim
fim:
    # epilogue
    movl %ebp,%esp
    popl %ebp

    ret 
