#include <stdio.h>

int main() {
    float x, sum = 0, term, power, fact;
    int n, i, j, sign = 1;

    printf("Enter value of x: ");
    scanf("%f", &x);
    printf("Enter number of terms n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Calculate x^i using loop
        power = 1;
        for (j = 1; j <= i; j++) {
            power = power * x;
        }

        // Calculate i! using loop
        fact = 1;
        for (j = 1; j <= i; j++) {
            fact = fact * j;
        }

        term = power / fact;
        sum = sum + sign * term;
        sign = -sign;   // alternate sign
    }

    printf("Sum of the series = %f\n", sum);
    return 0;
}