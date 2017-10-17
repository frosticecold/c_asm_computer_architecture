#include "asm.h"
#include <stdio.h>

int code=0;
int currentSal=0;
int main() {

    code = 101;
    currentSal = 400;
    int result = function(code, currentSal);


    printf("Code: %d Current Salary: %d New Salary: %d\n",code, currentSal, result);

    code = 102;
    currentSal = 400;
    result = function(code, currentSal);


    printf("Code: %d Current Salary: %d New Salary: %d\n",code, currentSal, result);

    code = 103;
    currentSal = 400;
    result = function(code, currentSal);


    printf("Code: %d Current Salary: %d New Salary: %d\n",code, currentSal, result);

    code = 104;
    currentSal = 400;
    result = function(code, currentSal);


    printf("Code: %d Current Salary: %d New Salary: %d\n",code, currentSal, result);
}