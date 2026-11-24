#include <stdio.h>

int main() {
    char source[100], destination[100];
    char *p1, *p2;

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    p1 = source;
    p2 = destination;

    while(*p1 != '\0') {
        *p2 = *p1;
        p1++;
        p2++;
    }

    *p2 = '\0';

    printf("Copied string: %s", destination);

    return 0;
}