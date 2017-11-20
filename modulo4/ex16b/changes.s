.section .text
.global changes

changes:
    pushl %ebp
    movl %esp,%ebp
    
    pushl %ebx

    movl 8(%ebp),%ebx
    movl (%ebx),%edx

extrair_bits:
    shrl $8,%edx
    andl $0xF,%edx
    notl %edx
    andl $0xF,%edx
    shll $8,%edx
    xorl %edx,(%ebx)

    popl %ebx

    movl %ebp,%esp
    popl %ebp
    ret
    