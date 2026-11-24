#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;

    while(str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];
    int (*operation)(char []);

    operation = stringLength;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length = %d\n", operation(str));

    return 0;
}