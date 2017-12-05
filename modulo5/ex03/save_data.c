#include "save_data.h"
#include <stdio.h>
#include <string.h>
void save_data(Student *p, int age, int number, char *name, char *address) {
  p->age = age;     //Alterar a idade
  p->number = number;//Alterar o número
  strncpy(p->name, name, 80);//Copiar para o nome de estudante o nome recebido como parâmetro
  strncpy(p->address, address, 120);//Copiar para a morada a morada recebida como parâmetro
}
void printstruct(Student *p) {
  printf("Name:%s\n", p->name);//Imprimir o nome
  printf("Age:%d Number:%d\n", p->age, p->number);//Imprimir a idade e o número
  printf("Address: %s\n", p->address);//Imprimir a morada
}