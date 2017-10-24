.section .bss
 .comm ptr1, 4
 .global ptr1

.section .text
  .global encrypt

encrypt:           # function start      
# prologue
    pushl %ebp       # save previous stack frame pointer
    pushl %esi
    movl %esp, %ebp  # the stack frame pointer for our function
# body        
    movl ptr1,%esi  # copy ptrvec to %esi
    movl $0, %eax

next_char:
    cmpb $0, (%esi)
    jz end
    cmpb $'a',(%esi)
    jne verifySpace
    incl %esi
    jmp next_char

verifySpace:
    cmpb $' ', (%esi)
    jne increment
    incl %esi
    jmp next_char

increment:
    addl $1, (%esi)
    incl %eax
    incl %esi
    jmp next_char

end:    				
    # note: return value (counter) in %eax
# epilogue
    movl %ebp, %esp  # restore the stack pointer ("clear" the stack)
    popl %esi
    popl %ebp        # restore the stack frame pointer
    ret  
