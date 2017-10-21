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

    movl $0,%eax
    movl $0,%ebx

    movw num,%ax # mover o número a trocar para ax
    movb %al,%bh # trocar os low bytes para os highbytes
    movb %ah,%bl # trocar os high bytes para os low bytes
    movw %bx,%ax # mover o resultado para ax

    movl %ebp,%esp
    popl %ebp

    ret 

concatBytes:
    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl $0,%eax # limpar o registo eax

    movb ch1,%ah # mover ch1 para ah
    movb ch2,%al # mover ch2 para al

    movl %ebp,%esp
    popl %ebp
    ret
