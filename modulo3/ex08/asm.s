.section .bss
 .comm ptrvec, 4
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
    jmp end

even_label:
    movl $1, %eax
    jmp end

vec_sum_even:           # function start      
# prologue
    pushl %ebp       # save previous stack frame pointer
    pushl %esi
    movl %esp, %ebp  # the stack frame pointer for our function

    movl ptrvec, %esi
    movl num, %ecx
    movl $0, %edx

iterate:
    movl (%esi), even
    call test_even
    cmpb $1, %eax
    je sum
    addl $4, %esi
    loop iterate

sum:
    addl (%esi), %edx
    addl $4, %esi
    decl %ecx
    jmp iterate

end_sum_vec:
# epilogue
    movl %ebp, %esp  # restore the stack pointer ("clear" the stack)
    popl %esi
    popl %ebp        # restore the stack frame pointer
    ret  
    

end:    				
    # note: return value (counter) in %eax
# epilogue
    movl %ebp, %esp  # restore the stack pointer ("clear" the stack)
    popl %ebp        # restore the stack frame pointer
    ret  
