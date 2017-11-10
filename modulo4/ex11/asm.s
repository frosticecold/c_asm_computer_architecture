.global rotate_left
.global rotate_right
rotate_left:
    pushl %ebp
    movl %esp,%ebp

    movl 8(%ebp),%eax # número a ser rodado para a esquerda
    movl 12(%ebp),%ecx # quantos rotates vamos fazer
loop_rl:
    roll %eax
    loop loop_rl

    movl %ebp,%esp
    popl %ebp
    ret

rotate_right:
    pushl %ebp
    movl %esp,%ebp

    movl 8(%ebp),%eax # número a ser rodado para a direita
    movl 12(%ebp),%ecx # quantos rotates vamos fazer
loop_rr:
    rorl %eax
    loop loop_rr

    movl %ebp,%esp
    popl %ebp
    ret
