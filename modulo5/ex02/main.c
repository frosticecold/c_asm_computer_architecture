#include "save_data.h"
#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#define N_S 5
int main() {

  Student student[N_S];
  save_data(&student[0],10,1,"José","Avenida abc");
  printstruct(&student[0]);

  save_data(&student[1],12,2,"André","Avenida cde");
  printstruct(&student[1]);

  save_data(&student[2],14,3,"Bernardo","Avenida def");
  printstruct(&student[2]);
  
  save_data(&student[3],16,4,"Carlos","Avenida efg");
  printstruct(&student[3]);

  save_data(&student[4],18,5,"Domingos","Avenida ghj");
  printstruct(&student[4]);


  return 0;
}