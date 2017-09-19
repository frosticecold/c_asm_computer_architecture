#include <stdio.h>
#include "count_words.c"

int main() {

    char s[100];

    printf("Insert string: ");
    scanf("%[^\n]%*c", s);
    count_words(s);
    return 0;
}