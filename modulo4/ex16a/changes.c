#include "changes.h"

void changes(int *ptr){

 int mask = 0x00000F00;
 int num = *ptr;
 num = ((num & mask) >> 8);
 if(num > 7){
     num = (~num & 0xF) << 8;
    *ptr = (*ptr ^ num);

 }

}