.global count_odd

count_odd:
    # prologue
    pushl %ebp
    movl %esp, %ebp
    
    movl 8(%ebp), %esi      # 1st parameter (*vec)
    movl 12(%ebp), %ecx     # 2nd parameter (n)
    movl $0,%eax
.l1:
    movl (%esi),%edx
    shrl %edx
    jc increment
    addl $4,%esi
    loop .l1
    jmp fim

increment:
    incl %eax
    addl $4,%esi
    loop .l1

fim:
    movl %ebp, %esp
    popl %ebp
    ret
