.section .data
 .global op

.section .text
  .global function
function: # (((((num - 1) * 3) + 12) / 3 ) + 5 ) - num
    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl op, %eax
    movl %eax, %ebx
    dec %eax

    imul $3, %eax

    addl $12, %eax

    movb $3, %cl

    divb %cl

    addl $5, %eax
    
    subl %ebx, %eax
    jo output_overflow
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
