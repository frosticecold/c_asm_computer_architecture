#include "save_data.h"
#include "student.h"
#include <stdio.h>
#include <stdlib.h>
int main() {

  Student student;                  //Declarar estáticamente um student
  Student *p = &student;            //Apontador para student
  char name[80] = "José";           //Nome
  char address[120] = "Avenida abc";//Morada
  save_data(p, 10, 1, name, address);//Vamos guardar em student a idade, o número, o nome e a morada

  printf("Name:%s\n", p->name);     //Imprimir Nome do estudante
  printf("Age:%d Number:%d\n", p->age, p->number);//Imprimir:Idade e número de um estudante
  printf("Address: %s\n", p->address);//Imprimir a morada de um estudante
  return 0;
}