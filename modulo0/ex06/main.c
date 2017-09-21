#include <stdio.h>
#include "fraction_to_number.h"
#include "string_to_int.h"

int main(){

    char str[] = "123.456";
    //char x2[] = "456.789";
    int intx = integer_part(str);
    int inty = fractional_part(str);
    printf("Integer part is:%d\n",intx);
    printf("Fractional part is:%d\n",inty);
    return 0;
}