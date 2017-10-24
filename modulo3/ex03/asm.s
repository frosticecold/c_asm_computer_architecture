.section .bss
 .comm ptr1, 4
 .comm ptr2, 4
 .global ptr1
 .global ptr2

.section .text
  .global str_copy_p2

str_copy_p2:           # function start      
# prologue
    pushl %ebp       # save previous stack frame pointer
    pushl %esi
    pushl %edi
    movl %esp, %ebp  # the stack frame pointer for our function
# body        
    movl ptr1,%esi  # copy ptr to %esi
    movl ptr2,%edi

next_char:
    movb (%esi), %cl
    movb %cl, (%edi)
    cmpb $0,(%esi)      # check if this is the end of the string
    jz end  # jump if it is the end
    cmpb $'b',(%esi)
    je changetov
    cmpb $'v',(%esi)
    je changetob

    incl %esi        # move to the next char in ptr1
    incl %edi
    jmp next_char     # next iteration  

changetov:
    movb $'v', (%edi)
    incl %esi
    incl %edi
    jmp next_char

changetob:
    movb $'b', (%edi)
    incl %esi
    incl %edi
    jmp next_char

end:    				
    # note: return value (counter) in %eax
# epilogue
    movl %ebp, %esp  # restore the stack pointer ("clear" the stack)
    popl %edi
    popl %esi
    popl %ebp        # restore the stack frame pointer
    ret  
