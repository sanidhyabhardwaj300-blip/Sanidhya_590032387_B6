#include <stdio.h>

int main() {
    int decimal, binary = 0, place = 1, remainder;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &decimal);

    int original = decimal;

    while (decimal > 0) {
        remainder = decimal % 2;
        binary = binary + remainder * place;
        place = place * 10;
        decimal = decimal / 2;
    }

    printf("Binary of %d is: %d\n", original, binary);
    return 0;
}