#include <stdio.h>
#include "identify_format.h"

int main(){

    char binary[] = "1010";
    char octal[] = "0706";
    char hexa[] = "FA9";
    char invalid[] = "8G";

    runVerifyType(binary);
    runVerifyType(octal);
    runVerifyType(hexa);
    runVerifyType(invalid);



    return 0;
}
