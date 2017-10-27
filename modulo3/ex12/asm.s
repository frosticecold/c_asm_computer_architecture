.section .bss
    .comm ptrvec,4
    .global ptrvec

.section .data
    .global num

.section .text
    .global vec_zero

vec_zero:
    pushl %ebp
    movl %esp,%ebp

    pushl %esi

    movl $1000,%edx
    movl num,%ecx
    movl ptrvec,%esi
    movl $0, %eax

iterate:
    cmpl %edx, (%esi)
    jge count
    addl $4,%esi
    loop iterate

    jmp fim

count:
    movl $0, (%esi)
    incl %eax
    addl $4,%esi
    loop iterate

fim:
    popl %esi

    movl %ebp,%esp
    popl %ebp

    ret
