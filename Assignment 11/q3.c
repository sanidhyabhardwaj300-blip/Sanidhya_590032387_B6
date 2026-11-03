//Write a C program that calls the same function several times and compares the behaviour of an automatic variable with a static variable.
#include <stdio.h>

void function_auto() {
    auto int x = 10; // Automatic variable
    x++;
    printf("Automatic variable: %d\n", x);
}

void function_static() {
    static int x = 10; // Static variable
    x++;
    printf("Static variable: %d\n", x);
}

int main() {
    printf("Calling function_auto() three times:\n");
    function_auto();
    function_auto();
    function_auto();

    printf("\nCalling function_static() three times:\n");
    function_static();
    function_static();
    function_static();

    return 0;
}