.section .data
 .global ptr1

.section .text
  .global space_count

space_count:           # function start      
# prologue
    pushl %ebp       # save previous stack frame pointer
    pushl %esi
    movl %esp, %ebp  # the stack frame pointer for our function
# body        
    movl ptr1,%esi  # copy str address to %esi (notice the $)
    movl $0,%eax    # counter = 0

cnt_loop:
    cmpb $0,(%esi)   # check if this is the end of the string
    jz cnt_loop_end  # jump if it is the end
    cmpb $' ',(%esi)
    je increment
    incl %esi        # move to the next char in ptr1
    jmp cnt_loop     # next iteration  

increment:
    incl %eax
    incl %esi
    jmp cnt_loop

cnt_loop_end:			
    # note: return value (counter) in %eax
    # epilogue
    movl %ebp, %esp  # restore the stack pointer ("clear" the stack)
    popl %esi
    popl %ebp        # restore the stack frame pointer
    ret  
