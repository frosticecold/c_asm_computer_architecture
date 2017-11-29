.section .data
    .equ TOTAL_SIZE,248
    .equ AGE_OFFSET,0
    .equ NUMBER_OFFSET,4
    .equ GRADES_OFFSET,8
    .equ NAME_OFFSET,48
    .equ ADDRESS_OFFSET,128

.global save_grades
# void save_grades(Student *s, int *new_grades)

save_grades:
  # prologue
  pushl %ebp
  movl %esp, %ebp

  pushl %esi
  pushl %edi
  
  movl 8(%ebp), %eax      # *s
  movl 12(%ebp), %esi     # *new_grades

  leal GRADES_OFFSET(%eax), %edi      # s->grades
  movl $10, %ecx          # 10 elementos

iterate:
  movl (%esi), %edx       # valor a ser colocado na estrutura
  movl %edx, (%edi)       # mover para a estrutura
  addl $4, %esi           # proximo valor
  addl $4, %edi           # proximo valor a ser alterado
  loop iterate

  popl %edi
  popl %esi

  # epilogue
  movl %ebp , %esp
  popl %ebp
  ret
