#include "save_grades.h"
#include "student.h"
#include <stdio.h>

void printstruct(Student *p) {
  printf("Name:%s\n", p->name);
  printf("Age:%d Number:%d\n", p->age, p->number);
  printf("Address: %s\n", p->address);
  printf("Grades: %d\n", p->grades[0]);
}

int main() {

  Student student;

  int vec[10] =  {18,16,13,14,17,19,12,10,17,14};
  int *new_grades = vec;

  printstruct(&student); // 0xbfffef24 
  printf("%p\n", &student);
  printf("%p\n", &student.grades);
  save_grades(&student,new_grades);
  printstruct(&student);

  return 0;
}