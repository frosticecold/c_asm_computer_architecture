.section .data
 .global i

 opa:
    .int 10
 opb:
    .int 5
 counter:
    .int 0

.section .text
  .global function

function: # Sum 0 -> i A/B

    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl $0,%eax
    movl $0,%ebx
    movl $0,%ecx
    movl $0,%edx
    movl $0,counter
    jmp floop

    jmp fim

floop:
    movl counter,%ebx
    inc %ebx
    movl %ebx,counter
    addl %eax,%ecx
    cmpl i,%ebx
    jg fim

    movl opa,%eax
    movl opb,%ebx
    
    movl $0,%edx
    idivl %ebx
    
    movl counter,%ebx
    imul %ebx,%eax
    jo output_overflow
    jmp floop 


output_overflow:
    movl $-1,%eax
    jmp fim

fim: # fim
    # epilogue
    movl %ecx,%eax
    movl %ebp, %esp
    popl %ebp

    ret
