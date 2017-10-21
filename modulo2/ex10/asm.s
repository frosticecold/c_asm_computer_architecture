.section .data
 .global op32a
 .global op32b

.section .text
 .global sum2intscheck

sum2intscheck:
    # prologue
    pushl %ebp
    movl %esp,%ebp

    # inicializar tudo a zero
    movl $0,%eax
    movl $0,%ebx
    movl $0,%ecx
    movl $0,%edx
 
    movl op32a,%eax
    addl op32b,%eax

    # se ativar a flag de overflow: -1
    jo com_overflow
    # em números inteiros com sinal só ativa a flag de carry se somar -2147483647 (o limite do complento para 2) com outro número negativo
    # se ativar a flag de carry: -2
    jc com_carry
    jmp fim

com_overflow:
    movl $-1,%eax
    jmp fim

com_carry:
    movl $-2,%eax
    jmp fim
    
fim:
    # epilogue
    movl %ebp,%esp
    popl %ebp

    ret 
