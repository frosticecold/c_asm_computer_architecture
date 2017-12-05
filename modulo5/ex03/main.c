#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "save_data.h"
#include "student.h"
#include "change_address.h"
int main() {

  Student std;                          //Student s
  Student *s = &std;
  save_data(s,10,1,"José","changeme");//Save data to student

  printstruct(s);                    //Imprimir a struct
  printf("\n===\n\n");                //Espaço
  char nadr[120] = "this is a new address";    //new address
  change_address(s,nadr);            //Change address
  printstruct(s);                    //Imprimir a estrutura
  return 0;
}