//Write a C program using a static local variable to count how many times a function has been called.
#include <stdio.h>
void countFunctionCalls() {
    static int count = 0; 
    count++;
    printf("Functionhas been called %d times\n", count);

}
int main() {
    printf("Calling countFunctionCalls() five times:\n");
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    return 0;

}