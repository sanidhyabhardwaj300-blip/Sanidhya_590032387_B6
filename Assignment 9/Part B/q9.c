
#include <stdio.h>

void analyze(int arr[], int n,
             int *small, int *secondSmall,
             int *greatest, int *secondGreatest,
             int *distinctCount) {
    int i;

    *distinctCount = 0;

    for (i = 0; i < n; i++) {
        int j, found = 0;

        for (j = 0; j < i; j++) {
            if (arr[j] == arr[i]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            if (*distinctCount == 0) {
                *small = *greatest = arr[i];
                *distinctCount = 1;
            } else {
                if (arr[i] < *small)
                    *small = arr[i];

                if (arr[i] > *greatest)
                    *greatest = arr[i];

                (*distinctCount)++;
            }
        }
    }

    if (*distinctCount < 2)
        return;

    *secondSmall = *greatest;
    *secondGreatest = *small;

    for (i = 0; i < n; i++) {
        if (arr[i] > *small && arr[i] < *secondSmall)
            *secondSmall = arr[i];

        if (arr[i] < *greatest &&
            arr[i] > *secondGreatest)
            *secondGreatest = arr[i];
    }
}

int main(void) {
    int arr[100], n, i;
    int small = 0, secondSmall = 0;
    int greatest = 0, secondGreatest = 0;
    int distinctCount;

    printf("Enter array size (1-100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size.\n");
        return 0;
    }

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    analyze(arr, n, &small, &secondSmall,
            &greatest, &secondGreatest, &distinctCount);

    if (distinctCount == 0) {
        printf("No elements found.\n");
    } else {
        printf("Smallest = %d\n", small);
        printf("Greatest = %d\n", greatest);

        if (distinctCount < 2) {
            printf("Fewer than two distinct values exist.\n");
        } else {
            printf("Second smallest = %d\n", secondSmall);
            printf("Second greatest = %d\n", secondGreatest);
        }
    }

    return 0;
}