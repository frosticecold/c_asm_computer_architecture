#include <stdio.h>
#include "capitalize_sentence.h"

int main() {
    char str[] = "The number must be saved";
    char str1[] = "The maximum value of this CYCLE";
    printf("%s -> ", str);
    capitalize(str);
    printf("%s\n\n", str);
    
    printf("%s -> ", str1);
    capitalize(str1);
    printf("%s\n\n", str1);
    return 0;
}