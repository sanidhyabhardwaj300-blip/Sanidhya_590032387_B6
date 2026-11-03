//Write a C program to demonstrate that a global variable declared with static can be accessed only within the same source file.
#include <stdio.h>
static int a = 500;

int main () {
    printf("Value of a: %d\n", a);
    return 0;
}