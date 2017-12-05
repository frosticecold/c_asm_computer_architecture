.section .data
    .equ TOTAL_SIZE,248 # Tamanho da estrutura em bytes
    .equ AGE_OFFSET,0   # Offset da idade
    .equ NUMBER_OFFSET,4 # Offset do número
    .equ GRADES_OFFSET,8 # Offset das notas
    .equ NAME_OFFSET,48  # Offset dos nomes
    .equ ADDRESS_OFFSET,128 # Offset da morada

.global find_greater

# int find_greater(Student *s, int minimum, int *greater_grades)
find_greater:
    # prologue
    pushl %ebp
    movl %esp, %ebp

    pushl %esi
    pushl %ebx
    pushl %edi

    movl 8(%ebp), %edi              # *s
    movl 12(%ebp), %edx             # minimum
    movl 16(%ebp), %esi             # *greater_grades
    movl $10, %ecx                  # num elementos
    movl $0, %eax                   # contador

    addl $GRADES_OFFSET, %edi       # O vetor das notas está a 8 bytes do inicio da estrutura

iterate:
    cmpl %edx, (%edi)               # compara as notas com o minimo
    jl skip                         # se as notas forem menores avança para a proxima
    movl (%edi), %ebx               # 
    movl %ebx, (%esi)               # mover para o vetor das notas
    addl $4, %esi                   # proxima nota
    incl %eax                       # incrementa o numero de notas a cima da nota minima

skip:
    addl $4, %edi                   # proximo endereco do vetor a ser analisado
    loop iterate                    # loop ate o num elementos = 0

    popl %edi
    popl %ebx
    popl %esi

    # epilogue
    movl %ebp, %esp
    popl %ebp
    ret
