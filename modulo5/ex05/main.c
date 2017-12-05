#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "find_greater.h"
#include "save_grades.h"

void printstruct(Student *p) {
  int i;
  printf("Name:%s\n", p->name);
  printf("Age:%d Number:%d\n", p->age, p->number);
  printf("Address: %s\n", p->address);
  printf("Grades: [ ");
  for(i=0; i<10; i++) {
	  printf("%d ",p->grades[i]);
  }
  printf("]\n");
}

int main() {

  Student student;
  
  int vec[10] =  {18,16,13,14,17,19,12,10,17,14};
  int *new_grades = vec;
  save_grades(&student,new_grades);
  
  printstruct(&student);

  int vec1[4];
  int *greater_grades = vec1;

  int res = find_greater(&student, 15, greater_grades);
  printf("\nThere are %d grades greater than 15. \n",res);

  printf("\nGrades greater than 15: ");
  for(int i=0; i<res; i++) {
    printf("%d ",greater_grades[i]);
  }
  printf("\n");

  return 0;
}