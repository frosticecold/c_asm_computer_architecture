#include <stdio.h>
#include "where_exists.h"
int main(){
    char str1[100] = "pizza";
    char str2[100] = "Not hungry to eat pizza now.";
    char str3[100] = "This string has no food";
    printf("The address for %s in str2 is:%p\n",str1,where_exists(str1,str2));
    printf("The address for %s in str3 is:%p\n",str1,where_exists(str1,str3));
    return 0;
}