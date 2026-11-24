//Function Pointer for Addition
//Write a C program to declare a pointer to a function that accepts two integers and returns their sum.
#include <stdio.h>
int add(int a, int b) {
    return a + b;
}

int main() {
    int (*ptr)(int, int) = add;
    int result = ptr(5, 3);
    printf("Sum = %d\n", result);
    return 0;
}