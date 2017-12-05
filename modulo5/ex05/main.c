#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "find_greater.h"
#include "save_grades.h"
#include "save_data.h"

int main() {

  Student student;
  Student *s = &student; // Apontador para a estrutura
  char nome[80] = "Ana Maria";
  char address[120] = "Do not change me";
  save_data(s,15, 1, nome, address);
  
  int vec[10] =  {18,16,13,14,17,19,12,10,17,14};
  int *new_grades = vec;
  save_grades(&student,new_grades);
  
  printstruct(&student);

  int vec1[10];
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