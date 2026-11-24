#include <stdio.h>

int ascending(int a, int b) {
    return a > b;
}

int descending(int a, int b) {
    return a < b;
}

void sort(int a[], int n, int (*compare)(int, int)) {
    int i, j, temp;

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {

            if(compare(a[j], a[j + 1])) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a[100], n, i, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        sort(a, n, ascending);
    else
        sort(a, n, descending);

    printf("Sorted array:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}