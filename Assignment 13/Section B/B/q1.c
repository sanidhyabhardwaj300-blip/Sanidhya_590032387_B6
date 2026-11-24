#include <stdio.h>

int main() {
    char str[100];
    char *p;
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    p = str;

    while(*p != '\0' && *p != '\n') {
        length++;
        p++;
    }

    printf("Length of string = %d\n", length);

    return 0;
}