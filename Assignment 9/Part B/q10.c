
#include <stdio.h>

void sortAscending(int *arr, int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void sortDescending(int *arr, int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (*(arr + j) < *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void display(int *arr, int n) {
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", *(arr + i));

    printf("\n");
}

int main(void) {
    int arr[100], n, i, choice;

    printf("Enter array size (1-100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size.\n");
        return 0;
    }

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("1. Ascending order\n");
    printf("2. Descending order\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        sortAscending(arr, n);
        printf("Ascending order: ");
    } else if (choice == 2) {
        sortDescending(arr, n);
        printf("Descending order: ");
    } else {
        printf("Invalid choice.\n");
        return 0;
    }

    display(arr, n);

    return 0;
}