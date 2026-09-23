//Insert an elment in a Position

#include <stdio.h>
int main()
{
    int arr[100], n, i, pos, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right
    for (i = n; i > pos; i--)
    {
     
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = element;

    printf("Array after insertion:\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}