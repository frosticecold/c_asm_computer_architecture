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

crossSumBytes:
    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl $0,%ebx # limpar o registo ebx
    movl $0,%ecx # limpar o registo ecx

    movw op1,%bx # mover op1 para bx
    movw op2,%cx # mover op2 para cx

    movl $0,%eax # limpar o registo eax
    movl $0,%edx # limpar o registo edx
    
    
    add %bh,%dh # vamos somar a dh o bh
    add %cl,%dh # vamos somar a dh o bh
                # a soma destes é ignorado o carry
    mov %dh,%ah # mover dh para a ah sem problemas de carry


    add %bl,%dl # somar bl a dl
    add %ch,%dl # somar bl a dl
                # à soma destes dois é ignorado o carry
    mov %dl,%al # mover dl para al sem problemas de carry


    # epilogue
    movl %ebp, %esp
    popl %ebp
    ret
