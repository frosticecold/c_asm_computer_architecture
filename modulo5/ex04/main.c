#include "save_data.h"
#include "save_grades.h"
#include "student.h"
#include <stdio.h>
#include <string.h>
#define N 10

int main() {

  Student student;       // Declarar estaticamente um estudante
  Student *s = &student; // Apontador para a estrutura
  char nome[80] = "Ana Maria";//Nome do student
  char address[120] = "Do not change me";//Morada do student
  save_data(s,15, 1, nome, address);//Guardar a info na estrutura

  int vec[N] = {18, 16, 13, 14, 17, 19, 12, 10, 17, 14}; 
  int *new_grades = vec;

  save_grades(s, new_grades); // guardar as notas na estrutura s
  printstruct(s); // Imprimir a estrutura
  printf("\n");
  return 0;
}