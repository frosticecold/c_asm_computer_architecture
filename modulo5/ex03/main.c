#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "save_data.h"
#include "student.h"
#include "change_address.h"
#define N_S 5
int main() {

  Student s;
  s.age = 10;
  s.number = 1;
  strncpy(s.name,"José",80);
  strncpy(s.address,"changeme",120);
  printstruct(&s);
  printf("\n===\n\n");
  char nadr[120] = "ABCDEFGHIJKL";
  change_address(&s,nadr);
  printstruct(&s);
  return 0;
}