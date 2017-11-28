#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "save_data.h"
#include "student.h"
#include "change_address.h"
int main() {

  Student std;                          //Student s
  Student *s = &std;
  std.age = 10;                         //Age 10
  std.number = 1;                       //Number 1
  strncpy(std.name,"José",80);          //strncpy José para o nome
  strncpy(std.address,"changeme",120);  //strncpy Address
  printstruct(s);                    //Imprimir a struct
  printf("\n===\n\n");                //Espaço
  char nadr[120] = "ABCDEFGHIJKL";    //new address
  change_address(s,nadr);            //Change address
  printstruct(s);                    //Imprimir a estrutura
  return 0;
}