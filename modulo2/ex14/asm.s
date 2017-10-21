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

    # num -1
    dec %eax

    # (num - 1) * 3
    imul $3, %eax

    # ((num - 1) * 3) + 12
    addl $12, %eax

    # (((num - 1) * 3) + 12) / 3
    movb $3, %cl
    divb %cl
    
    # ((((num - 1) * 3) + 12) / 3 ) + 5
    addl $5, %eax
    
    # (((((num - 1) * 3) + 12) / 3 ) + 5 ) - num
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

    ret 
