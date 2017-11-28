.global save_grades

save_grades:
  # prologue
  pushl %ebp
  movl %esp, %ebp

  pushl %esi
  pushl %edi
  
  movl 8(%ebp), %eax      # *s
  movl 12(%ebp), %esi     # *new_grades

  movl 8(%eax), %edi      # s->grades
  movl $10, %ecx

iterate:
  movl (%esi), %edx
  movl %edx, (%edi)
  addl $4, %esi
  addl $4, %edi
  loop iterate

  popl %edi
  popl %esi

  # epilogue
  movl %ebp , %esp
  popl %ebp
  ret
