//Delete an element from an array

#include <stdio.h>
int main()
{
    int arr[100], n, i, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete: ");
    scanf("%d", &pos);

    // Shift elements to the left
    for (i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("Array after deletion:\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}