#include <stdio.h>
#include <stdlib.h>

#include "string_to_int.c"

int main() {
    char string[] = "12345";
    char string1[] = "12343";

    printf("String: 12345\n");
    printf("Integer:%i\n", string_to_int(string));
    
    return 0;
}