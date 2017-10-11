.section .data
 .global num
 .global res
 .global ch1
 .global ch2

 .section .text
  .global swapBytes
  .global concatBytes
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
    
concatBytes:
    # prologue
    pushl %ebp
    movl %esp,%ebp

    mov ch1,%ah
    mov ch2,%al

    movl %ebp,%esp
    popl %ebp
    ret
