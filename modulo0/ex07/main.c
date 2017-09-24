#include <stdio.h>
#include "identify_format.h"

int main(){

    char binary[] = "1010";
    char octal[] = "0706";
    char dec[] = "90192";
    char hexa[] = "FA9";
    char hexlower[] = "afbc988";
    char invalid[] = "8G";

    runVerifyType(binary);
    runVerifyType(octal);
    runVerifyType(dec);
    runVerifyType(hexa);
    runVerifyType(hexlower);
    runVerifyType(invalid);



    return 0;
}
