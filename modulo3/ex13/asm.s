.section .bss
    .comm ptrvec,4
    .global ptrvec

.section .data
    .global num

.section .text
    .global vec_fill

vec_fill:
    pushl %ebp
    movl %esp,%ebp

    pushl %esi

    movl num,%ecx
    movl ptrvec,%esi
    movl $0, %eax

iterate:
    cmpl $0, (%esi)
    jl change
    addl $4,%esi
    incl %eax
    cmpl %ecx, %eax
    jl iterate

    jmp fim

change:
    movl %eax, (%esi)
    incl %eax
    addl $4,%esi
    jmp iterate

fim:
    popl %esi

    movl %ebp,%esp
    popl %ebp

    ret
