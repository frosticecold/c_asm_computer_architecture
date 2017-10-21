#include "asm.h"
#include <stdio.h>

int code=0;
int currentSalary=0;
int main() {

    code = 101;
    currentSalary = 400;
    int newSalary = function(code, currentSalary);


    printf("Code: %d Current Salary: %d New Salary: %d\n",code, currentSalary, newSalary);

    code = 102;
    currentSalary = 400;
    newSalary = function(code, currentSalary);


    printf("Code: %d Current Salary: %d New Salary: %d\n",code, currentSalary, newSalary);

    code = 103;
    currentSalary = 400;
    newSalary = function(code, currentSalary);


    printf("Code: %d Current Salary: %d New Salary: %d\n",code, currentSalary, newSalary);

    code = 104;
    currentSalary = 400;
    newSalary = function(code, currentSalary);


    printf("Code: %d Current Salary: %d New Salary: %d\n",code, currentSalary, newSalary);
}