.global greater

greater:
    # prologue
    pushl %ebp
    movl %esp, %ebp
    
    movl 8(%esp), %edx      # 1st parameter (a)
    movl 12(%esp), %ecx     # 2nd parameter (b)
    movl 16(%esp), %eax     # 3rd parameter (c)
    cmpl %ecx, %eax
    jge eaxbigger1
    movl %ecx, %eax
    
eaxbigger1:
    cmpl %edx, %eax
    jge eaxbigger2
    movl %edx, %eax

eaxbigger2:
    # epilogue
    movl %ebp , %esp
    popl %ebp
    ret
