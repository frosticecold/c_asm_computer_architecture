.section .data
 .global num
 .global res

 .section .text
  .global swapBytes

swapBytes:
    # prologue
    pushl %ebp
    movl %esp,%ebp

    mov num,%ax
    mov %al,%bh
    mov %ah,%bl
    mov %bx,%ax

    movl %ebp,%esp
    popl %ebp

    ret 
    