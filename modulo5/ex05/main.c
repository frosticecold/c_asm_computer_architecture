#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "find_greater.h"
#include "save_grades.h"
#include "save_data.h"

int main() {

  Student student;
  Student *s = &student;              // Apontador para a estrutura
  char nome[80] = "Ana Maria";
  char address[120] = "Do not change me";
  save_data(s,15, 1, nome, address);  //Guardar info na estrutura
  
  int vec[10] =  {18,16,13,14,17,19,12,10,17,14};
  int *new_grades = vec;
  save_grades(&student,new_grades); //Guardar as notas na estrutura
  
  printstruct(&student);            //Imprimir a estrutura

  int vec1[10];                     //Vetor que vai guardar as notas maiores que uma data nota
  int *greater_grades = vec1;       //Apontador para esse vetor

  int nota = 15;                    //Nota a comparar
  int res = find_greater(&student, nota, greater_grades);//Procurar as notas maiores que o valor da nota definido anteriormente
  printf("\nThere are %d grades greater than %d. \n",res,nota);

  printf("\nGrades greater than %d: ",nota);
  for(int i=0; i<res; i++) {
    printf("%d ",greater_grades[i]);
  }
  printf("\n");

  return 0;
}