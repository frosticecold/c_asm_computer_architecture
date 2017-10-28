#include <stdio.h>
#include "asm.h"

char ptr3[81] = "";
char ptr1[41] = "1234512345123451234512345123451234512345";
char ptr2[41] = "9876598765987659876598765987659876598765";


/*char ptr3[11] ="";
char ptr1[6] = "12345";
char ptr2[6] = "98765";
*/
int main(){

    str_cat();
    printf("ptr3: %s\n",ptr3);

    return 0;
}