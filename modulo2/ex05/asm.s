.section .data
 .global num
 .global res

 .section .text
  .global swapBytes

swapBytes:
    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl $0,%eax
    movl $0,%ebx

    movw num,%ax # mover o número a trocar para ax
    movb %al,%bh # trocar os low bytes para os highbytes
    movb %ah,%bl # trocar os high bytes para os low bytes
    movw %bx,%ax # mover o resultado para ax

    movl %ebp,%esp
    popl %ebp

    ret 
    