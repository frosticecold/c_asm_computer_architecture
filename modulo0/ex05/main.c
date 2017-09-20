#include <stdio.h>
#include "count_words.h"

#define STRING_SIZE 200

int main() {

    char s[STRING_SIZE];

    printf("Insert string: ");
    fgets(s, STRING_SIZE, stdin);
    printf("Number of words: %d\n", count_words(s));
    return 0;
}