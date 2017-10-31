.section .data
    .global ptrsrc
    .global ptrdest
.section .text
    .global sort_without_reps

sort_without_reps:
    pushl %ebp
    movl %esp,%ebp

    movl num,%ecx
    decl %ecx
    movl ptrsrc,%esi

outerloop:
    pushl %eax
    pushl %ecx
    pushl %edx
    call innerfunction
    popl %edx
    popl %ecx
    popl %eax
    loop outerloop

    call move_to_array

outer_exit:
    movl %ebp,%esp
    popl %ebp

    ret

innerfunction:
    pushl %ebp
    movl %esp,%ebp

    pushl %ebx
    pushl %esi
    pushl %edi

    movl $0,%edx  # indice do esi
    movl num,%ecx # ecx é o contador para o loop
    decl %ecx
    movl ptrsrc,%esi
for_inner_loop:
    movl (%esi,%edx,4),%eax
    incl %edx
    movl (%esi,%edx,4),%ebx
    cmpl %eax,%ebx
    jl swap
    loop for_inner_loop
    jmp inner_end
swap:
    decl %edx
    movl %ebx,(%esi,%edx,4)
    incl %edx
    movl %eax,(%esi,%edx,4)
    loop for_inner_loop
    jmp inner_end

inner_end:
    movl %edx, %eax
    popl %edi
    popl %esi
    popl %ebx

    movl %ebp,%esp
    popl %ebp

    ret

move_to_array:
    # prologue
    pushl %ebp          # save previous stack frame pointer
    movl %esp, %ebp     # the stack frame pointer for our function
# body        
    movl ptrsrc,%esi     # copy str1 address to %esi
    movl ptrdest,%edi     # copy str2 address to %esi
    movl num, %ecx
    pushl %ebx
    movl $0, %eax

str_loop:
    cmpl %ecx,num
    je swap_first
    movl (%esi),%edx     # copy char from str1 (pointed by %esi) to %cl
    addl $4, %esi
    movl (%esi), %ebx
    cmpl %edx, %ebx
    je moveone
    movl %edx,(%edi)     # copy char in %cl to str2 (pointed by address in %edi) 
    incl %eax
    addl $4, %edi           # move to the next char in str2
    loop str_loop        # next iteration

    jmp str_loop_end

swap_first:
    movl (%esi), %edx
    movl %edx, (%edi)
    addl $4, %esi
    addl $4, %edi
    incl %eax
    loop str_loop

    jmp str_loop_end

moveone:
    movl %edx,(%edi)     # copy char in %cl to str2 (pointed by address in %edi) 
    incl %eax
    addl $4, %esi         # move to the next char in str1 
    addl $4, %edi           # move to the next char in str2
    decl %ecx
    loop str_loop        # next iteration
    
    jmp str_loop_end
    
str_loop_end:           # loop end; note: return value (counter) in %eax 		
# epilogue
    popl %ebx
    movl %ebp, %esp     # restore the stack pointer ("clear" the stack)
    popl %ebp           # restore the stack frame pointer
    ret                 # return from the function    

