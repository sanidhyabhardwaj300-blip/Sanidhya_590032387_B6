//Array of Function Pointers
//Write a C program to create an array of function pointers for calculating the square, cube, and factorial of a number.
#include <stdio.h>
int square(int n) {
    return n * n ;
}
int cube(int n) {
    return n * n * n ;
}
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int (*func_ptr[3])(int) = {square, cube, factorial};
    int choice, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Choose an operation:\n1. Square\n2. Cube\n3. Factorial\n");
    scanf("%d", &choice);
    if (choice >= 1 && choice <= 3) {
        printf("Result: %d\n", func_ptr[choice - 1](num));
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}