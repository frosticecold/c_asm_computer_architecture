#include "save_data.h"
#include <stdio.h>
#include <string.h>
void save_data(Student *p, int age, int number, char *name, char *address) {
  p->age = age;
  p->number = number;
  strncpy(p->name, name, 80);
  strncpy(p->address, address, 120);
}
void printstruct(Student *p) {
  printf("Name:%s\n", p->name);
  printf("Age:%d Number:%d\n", p->age, p->number);
  printf("Address: %s\n", p->address);
}