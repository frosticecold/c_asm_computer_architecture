#include <string.h>
#include <ctype.h>

int palindrome(char *str) {
    int length = strlen(str);
    char *s = str + 0;
    const char *e = str + length - 1;

    while (s < e) {
        if (!isalnum(*s)) {
            s++;
        } else if (!isalnum(*e)) {
            e--;
        } else if (toupper(*s) == toupper(*e)) {
            s++;
            e--;
        } else {
            return 0;
        }
    }
    return 1;
}