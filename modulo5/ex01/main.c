#include "save_data.h"
#include "student.h"
#include <stdio.h>
#include <stdlib.h>
int main() {

  Student student;
  Student *p = &student;
  char name[80] = "José";
  char address[120] = "Avenida abc";
  save_data(p, 10, 1, name, address);

  printf("Name:%s\n",p->name);
  printf("Age:%d Number:%d\n",p->age,p->number);
  printf("Address: %s\n",p->address);
  return 0;
}