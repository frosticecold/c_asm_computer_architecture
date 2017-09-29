#include <stdio.h>
#include "palindrome.h"

int main() {
    char str[] = "Never odd or even";
    char str1[] = "A man a plan a canal Panama.";
    char str2[] = "Gateman sees name, garageman sees name tag";
    printf("%d\n", palindrome(str));
    printf("%d\n", palindrome(str1));
    printf("%d\n", palindrome(str2));
    return 0;
}