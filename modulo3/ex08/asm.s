.section .bss
 .comm ptrvec, 24
 .global ptrvec
 .global num
 .global even

.section .text
  .global test_even
  .global vec_sum_even

test_even:           # function start      
# prologue
    pushl %ebp       # save previous stack frame pointer
    movl %esp, %ebp  # the stack frame pointer for our function
# body        
    movl $0, %eax
    movl $0, %ecx
    movl even, %ecx
    shr %cl
    jnc even_label
    movl %ebp, %esp  # restore the stack pointer ("clear" the stack)
    popl %ebp        # restore the stack frame pointer
    ret  

even_label:
    movl $1, %eax
    movl %ebp, %esp  # restore the stack pointer ("clear" the stack)
    popl %ebp        # restore the stack frame pointer
    ret

vec_sum_even:           # function start      
# prologue
    pushl %ebp       # save previous stack frame pointer
    pushl %esi
    movl %esp, %ebp  # the stack frame pointer for our function

    movl ptrvec, %esi
    movl num, %ecx
    movl $0, %edx

iterate:
    movl (%esi), %eax
    movl %eax, even
    pushl %ecx
    call test_even
    popl %ecx
    cmpl $1, %eax
    je sum
    addl $4, %esi
    loop iterate

    cmpl $0, %ecx
    je end

sum:
    addl (%esi), %edx
    addl $4, %esi
    loop iterate

end:
    movl %edx, %eax
    movl %ebp, %esp  # restore the stack pointer ("clear" the stack)
    popl %esi
    popl %ebp        # restore the stack frame pointer
    ret
    