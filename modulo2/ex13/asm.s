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
    movl b,%eax
    imul c,%eax
    jo output_overflow

    idiv d,%eax
    addl a,%eax
    adc $0,%edx

    jmp fim

output_overflow:
    movl $-1,%eax
    jmp fim
fim:
    # epilogue

    movl %ebp,%esp
    popl %ebp

    # o retorno é
    # EAX
    # H:L
    ret 
