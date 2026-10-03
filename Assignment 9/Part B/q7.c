
#include <stdio.h>

void cyclicSwap(int *a, int *b, int *c) {
    int temp = *a;

    *a = *b;
    *b = *c;
    *c = temp;
}

int main(void) {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Before swapping: a=%d, b=%d, c=%d\n",
           a, b, c);

    cyclicSwap(&a, &b, &c);

    printf("After swapping:  a=%d, b=%d, c=%d\n",
           a, b, c);

    return 0;
}