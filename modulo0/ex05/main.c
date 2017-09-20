#include <stdio.h>
#include "count_words.h"

int main() {

    char s[100];

    printf("Insert string: ");
    scanf("%[^\n]%*c", s);
    printf("Number of words: %d\n", count_words(s));
    return 0;
}