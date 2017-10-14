.section .data
 .global num
 .global res
 .global ch1
 .global ch2
 .global op1
 .global op2

 .section .text
  .global swapBytes
  .global concatBytes
  .global crossSumBytes
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

crossSumBytes:
    # prologue
    pushl %ebp
    movl %esp,%ebp

    mov op1,%bx
    mov op2,%cx

    movl $0,%eax
    movl $0,%edx
    
    
    add %bh,%dh
    add %cl,%dh
    mov %dh,%ah


    add %bl,%dl
    add %ch,%dl

    mov %dl,%al


    # epilogue
    movl %ebp, %esp
    popl %ebp
    ret
