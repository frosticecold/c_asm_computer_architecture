.section .data
    .equ TOTAL_SIZE,248 # Tamanho da estrutura em bytes
    .equ AGE_OFFSET,0   # Offset da idade
    .equ NUMBER_OFFSET,4 # Offset do número
    .equ GRADES_OFFSET,8 # Offset das notas
    .equ NAME_OFFSET,48  # Offset dos nomes
    .equ ADDRESS_OFFSET,128 # Offset da morada
.section .text
.global change_address
# void change_address(Student *s, char *new_address);
change_address:
    # prologo
    pushl %ebp
    movl %esp,%ebp
    
    # callee save
    pushl %esi 
    pushl %edi

    movl 8(%ebp),%esi   # apontador para struct student
    movl 12(%ebp),%edi  # apontador para a string newaddress

.loop_cpy:
    # comparar se chegamos ao fim
    cmpl $0,(%edi)
    je end # se sim, fim
    movb (%edi),%cl                 # mover um caractére para cl
    movb %cl,ADDRESS_OFFSET(%esi)   # mover o caractére para a estrutura no dado offset
    incl %edi                       # incrementar edi
    incl %esi                       # incrementar esi
    jmp .loop_cpy                   # jump .loop_cpy
end:
    # callee save
    popl %edi
    popl %esi
    # epilogo
    movl %ebp,%esp
    popl %ebp
    ret
    