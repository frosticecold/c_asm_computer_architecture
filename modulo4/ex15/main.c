#include <stdio.h>
#include "greater_date_c.h"
#include "greater_date_asm.h"

int main(){

    int date1 = 1114113; // data 1
    int date2 = 16842754; // data 2 > data 1 supostamente
    int res = greater_date_asm(date1,date2);
    printf("A data maior é:%d",res);
    return 0;
}