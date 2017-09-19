#include <stdio.h>
#include "average_words.c"

int main() {

    char string[] = "12345";
    char string1[] = "12345";
    
    printf("Average: %i\n", average_words(string, string1));
    return 0;
}