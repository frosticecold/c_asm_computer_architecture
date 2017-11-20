.section .text
    .global changes
    .global changes_vec
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
changes_vec:
    pushl %ebp
    movl %esp,%ebp

    movl 8(%ebp),%esi # registo para o vetor
    movl 12(%ebp),%edx # registo para o contador de num
.loop_change:
    pushl %edx
    pushl %esi
    call changes
    addl $4,%esp
    popl %edx
    addl $4,%esi
    decl %edx
    cmpl $0,%edx
    jnz .loop_change

    movl %ebp,%esp
    popl %ebp
    ret
