.section .bss
 .comm ptrvec, 4
 .global ptrvec

.section .data
 .global num

.section .text
  .global vec_inc

vec_inc:           # function start      
# prologue
    pushl %ebp       # save previous stack frame pointer
    pushl %esi
    movl %esp, %ebp  # the stack frame pointer for our function
# body        
    movl ptrvec,%esi  # copy ptrvec to %esi
    movl num, %ecx

next_char:
    incl (%esi)
    addl $4, %esi        # move to the next char in ptr1
    loop next_char

end:    				
    # note: return value (counter) in %eax
# epilogue
    movl %ebp, %esp  # restore the stack pointer ("clear" the stack)
    popl %esi
    popl %ebp        # restore the stack frame pointer
    ret  
