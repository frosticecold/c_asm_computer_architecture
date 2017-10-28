.section .data
    .global ptr1
    .global ptr2
    .global ptr3

.section .text
    .global str_cat

str_cat:

    pushl %ebp
    movl %esp,%ebp

copy_first:
    leal ptr3,%esi
    leal ptr1,%edi
loop_copy_first:
    movb (%edi),%dl
    cmpb $0,%dl
    je copy_second
    movb %dl,(%esi)
    incl %edi
    incl %esi
    jmp loop_copy_first
copy_second:
    leal ptr2,%edi
loop_copy_second:
    movb (%edi),%dl
    cmpb $0,%dl
    je fim
    movb %dl,(%esi)
    incl %edi
    incl %esi
    jmp loop_copy_second
fim:
    incl %esi
    movl $0,(%esi)

    movl %ebp,%esp
    popl %ebp

    ret
