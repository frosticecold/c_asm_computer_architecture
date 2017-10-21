.section .data
 .global a
 .global b
 .global c
 .global d

.section .text
  .global function
function: # A + ( B * C ) / D
    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl $0,%edx

    # parentesis primeiro
    movl b,%eax
    imul c,%eax

    # divisao a segir
    idiv d,%eax

    # finalmente a adicao
    addl a,%eax
    adc $0,%edx

    jmp output

output:
    jo o_overflow
    jmp fim

o_carry:
    mov $0,%eax
    jo o_overflow
    jmp fim

o_overflow:
    mov $0,%eax
    jmp fim
fim:
    # epilogue
    movl %ebp,%esp
    popl %ebp

    ret 
    