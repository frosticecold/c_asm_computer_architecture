#include <stdio.h>
#include "average_words.h"

int main() {

    char string_a[10];
    char string_b[10];

    printf("Enter the first number: ");
    scanf("%s", string_a);
    printf("Enter the second number: ");
    scanf("%s", string_b);
    
    printf("Average: %.2f\n", average_words(string_a, string_b));
    return 0;
}