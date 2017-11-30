#include "save_grades.h"
#include "student.h"
#include <stdio.h>
#include <string.h>
#define N 10
void printstruct(Student *p) {
  printf("Name:%s\n", p->name);
  printf("Age:%d Number:%d\n", p->age, p->number);
  printf("Address: %s\n", p->address);
  printf("Grades:");
  int i;
  for(i=0; i < N; i++){
    printf("%d ",p->grades[i]);
  }
}

int main() {

  Student student;
  Student *s =&student;
  strcpy(s->name,"Ana Maria");
  s->age = 15;
  s->number=1;
  strcpy(s->address,"Do not change me");

  int vec[N] =  {18,16,13,14,17,19,12,10,17,14};
  int *new_grades = vec;

  printstruct(s);         //Imprimir a estrutura
  save_grades(s,new_grades); // guardar as notas na estrutura s
  printf("\n\n====\n\n");
  printstruct(s);         //Imprimir a estrutura
  printf("\n");
  return 0;
}