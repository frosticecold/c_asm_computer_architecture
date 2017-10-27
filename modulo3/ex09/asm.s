.section .bss
    .comm ptrvec,4
    .global ptrvec

.section .data

    .global x
    .global num

.section .text
    .global vec_search

vec_search:
    pushl %ebp
    movl %esp,%ebp

    pushl %esi

    movl $0,%edx
    movw x,%dx
    movl num,%ecx
    movl ptrvec,%esi

    jmp loop_search

loop_search:
    cmpw %dx,(%esi)
    jz output
    addl $2,%esi
    loop loop_search
    movl $0,%eax
    jmp fim
output:
    movl %esi,%eax
    jmp fim
fim:
    popl %esi

    movl %ebp,%esp
    popl %ebp

    ret
