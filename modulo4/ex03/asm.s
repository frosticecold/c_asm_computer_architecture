.global greater

greater:
    # prologue
    pushl %ebp
    movl %esp, %ebp
    
    movl 8(%ebp), %edx      # 1st parameter (a)
    movl 12(%ebp), %ecx     # 2nd parameter (b)
    movl 16(%ebp), %eax     # 3rd parameter (c)
    cmpl %ecx, %eax
    jge eaxbigger1
    movl %ecx, %eax # mover parametro b para eax
    
eaxbigger1:
    cmpl %edx, %eax # parametro b é maior que parametro a?
    jge eaxbigger2
    movl %edx, %eax # mover o parametro a para eax

eaxbigger2:
    # epilogue
    movl %ebp , %esp
    popl %ebp
    ret
