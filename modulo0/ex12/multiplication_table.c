#include <stdio.h>
#include "multiplication_table.h"
#include "multiplication_table_n.h"

void multiplication_table(void){
    const int li = 2, ls = 9;
    for(int i = li; i <= ls; i++){
        multiplication_table_n(i);
        printf("\n");
    }
}