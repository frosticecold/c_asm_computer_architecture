#include "save_data.h"
#include <stdio.h>
#include <string.h>
#define N 10
void save_data(Student *p, int age, int number, char *name, char *address) {
  p->age = age;     //Alterar a idade
  p->number = number;//Alterar o número
  strncpy(p->name, name, 80);//Copiar para o nome de estudante o nome recebido como parâmetro
  strncpy(p->address, address, 120);//Copiar para a morada a morada recebida como parâmetro
}
void printstruct(Student *p) {  //Método para imprimir a estrutura student
  printf("Name:%s\n", p->name); //Imprimir nome
  printf("Age:%d Number:%d\n", p->age, p->number); //Imprimir idade
  printf("Address: %s\n", p->address); //Imprimir morada
  printf("Grades:");//Imprimir as notas
  int i;
  for(i=0; i < N; i++){
    printf("%d ",p->grades[i]);
  }
}