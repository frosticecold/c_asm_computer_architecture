#include <stdio.h>
#include "fraction_to_number.h"

int main(){

    char str[] = "123.456";
    //char x2[] = "456.789";
    int intx = integer_part(str);
    int inty = fractional_part(str);
    printf("Original number is: %s\n",str);
    printf("Integer part is:%d\n",intx);
    printf("Fractional part is:%d\n",inty);
    printf("\n=============================\n\n");
    char str2[] = "-1235678.456";
    intx = integer_part(str2);
    inty = fractional_part(str2);
    printf("Original number is: %s\n",str2);
    printf("Integer part is:%d\n",intx);
    printf("Fractional part is:%d\n",inty);

    return 0;
}