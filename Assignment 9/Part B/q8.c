
#include <stdio.h>

void display(int arr[], int size) {
    int i;

    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array: ");

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

void insert(int arr[], int *size, int capacity,
            int value, int position) {
    int i;

    if (*size >= capacity) {
        printf("Array is full.\n");
        return;
    }

    if (position < 1 || position > *size + 1) {
        printf("Invalid position.\n");
        return;
    }

    for (i = *size; i >= position; i--)
        arr[i] = arr[i - 1];

    arr[position - 1] = value;
    (*size)++;

    printf("Element inserted.\n");
}

int deleteElement(int arr[], int *size,
                  int position, int *deleted) {
    int i;

    if (position < 1 || position > *size)
        return 0;

    *deleted = arr[position - 1];

    for (i = position - 1; i < *size - 1; i++)
        arr[i] = arr[i + 1];

    (*size)--;

    return 1;
}

int main(void) {
    int arr[100], size, i;
    int choice, value, position, deleted;

    printf("Enter initial array size (0-100): ");
    scanf("%d", &size);

    if (size < 0 || size > 100) {
        printf("Invalid size.\n");
        return 0;
    }

    printf("Enter array elements:\n");

    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n1. Display\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            display(arr, size);
            break;

        case 2:
            printf("Enter value and position: ");
            scanf("%d %d", &value, &position);
            insert(arr, &size, 100, value, position);
            break;

        case 3:
            printf("Enter position to delete: ");
            scanf("%d", &position);

            if (deleteElement(arr, &size, position, &deleted))
                printf("Deleted value = %d\n", deleted);
            else
                printf("Invalid position.\n");
            break;

        case 4:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}