//Write a C program using the register storage class to calculate the sum of the elements of an array.
#include <stdio.h>
int main()
{
    int arr[5], sum = 0;
    printf("Enter 5 elements of the array;\n");
    for (register int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of the elements: %d\n", sum);
    return 0;
}