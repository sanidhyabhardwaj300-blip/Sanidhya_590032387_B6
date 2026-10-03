
#include <stdio.h>

int sumDigits(int n) {
    int sum = 0;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int countDigits(int n) {
    int count = 0;

    do {
        count++;
        n /= 10;
    } while (n != 0);

    return count;
}

long long reverseNumber(int n) {
    long long rev = 0;
    long long temp = n;

    if (temp < 0)
        temp = -temp;

    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    return n < 0 ? -rev : rev;
}

int main(void) {
    int n;
    long long rev;

    printf("Enter an integer: ");
    scanf("%d", &n);

    rev = reverseNumber(n);

    printf("Sum of digits = %d\n", sumDigits(n));
    printf("Number of digits = %d\n", countDigits(n));
    printf("Reverse = %lld\n", rev);

    if (n >= 0 && rev == n)
        printf("Palindrome: Yes\n");
    else
        printf("Palindrome: No\n");

    return 0;
}