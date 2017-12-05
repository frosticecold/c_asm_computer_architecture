#include "save_data.h"
#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#define N_S 5
int main() {

  Student student[N_S];   //Declarar estáticamente 5 estudantes
  save_data(&student[0],10,1,"José","Avenida abc");//Guardar info no 1º estudante
  printstruct(&student[0]);//Imprimir a estrutura

  save_data(&student[1],12,2,"André","Avenida cde");//Guardar info no 2º estudante
  printstruct(&student[1]);//Imprimir a estrutura

  save_data(&student[2],14,3,"Bernardo","Avenida def");//Guardar info no 3º estudante
  printstruct(&student[2]);//Imprimir a estrutura
  
  save_data(&student[3],16,4,"Carlos","Avenida efg");//Guardar info no 4º estudante
  printstruct(&student[3]);//Imprimir a estrutura

  save_data(&student[4],18,5,"Domingos","Avenida ghj");//Guardar info no 5º estudante
  printstruct(&student[4]);//Imprimir a estrutura

  return 0;
}