//Write a C program to declare an integer variable and an integer pointer. Assign the address of the variable to the pointer and display the value, address, pointer value, and dereferenced value.


#include <stdio.h>
int main() {
    int var = 10;
    int *ptr = &var;
    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", (void*)&var);
    printf("Value of ptr: %p\n", (void*)ptr);
    printf("Dereferenced value of ptr: %d\n", *ptr);
    return 0;
}