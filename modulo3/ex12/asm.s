.section .bss
    .comm ptrvec,2
    .global ptrvec

.section .data
    .global num

.section .text
    .global vec_zero

vec_zero:
    pushl %ebp
    movl %esp,%ebp

    pushl %esi

    movw $1000,%dx
    movl num,%ecx
    movl ptrvec,%esi
    movl $0, %eax

iterate:
    cmpw %dx, (%esi)
    jge count
    addl $2,%esi
    loop iterate

    jmp fim

count:
    movw $0, (%esi)
    incl %eax
    addl $2,%esi
    loop iterate

fim:
    popl %esi

    movl %ebp,%esp
    popl %ebp

    ret
