#include <stdio.h>
#include <stdlib.h>

#include "string_to_int.h"

int main() {
    char string[] = "21631";

    printf("String: %s\n", string);
    printf("Integer:%i\n", string_to_int(string));
    
    return 0;
}