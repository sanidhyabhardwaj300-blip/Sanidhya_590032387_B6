
#include <stdio.h>

int gcd(int a, int b) {
    int temp;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

long long lcm(int a, int b) {
    return ((long long)a / gcd(a, b)) * b;
}

int main(void) {
    int a, b, c;
    int g;
    long long l;

    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    g = gcd(gcd(a, b), c);
    l = lcm(lcm(a, b), c);

    printf("GCD = %d\n", g);
    printf("LCM = %lld\n", l);

    return 0;
}