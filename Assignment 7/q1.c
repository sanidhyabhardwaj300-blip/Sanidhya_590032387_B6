//Array traversal, Sum, and Average

#include <stdio.h>
int main()
{
    int arr[100], n, i, sum = 0;
    float avg;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Sum of the array elements: %d\n", sum);
    printf("Average of the array elements: %.2f\n", avg);

    return 0;
}