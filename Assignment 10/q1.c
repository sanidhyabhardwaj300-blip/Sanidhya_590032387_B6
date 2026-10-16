//Factorial of a positive integer using recursion
#include <stdio.h>

long long factorial(int n) {
    if (n == 0||n==1)
        return 1;
    else
        return n * factorial(n-1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    printf("Factorial of %d is %lld", num, factorial(num));
    return 0;
}