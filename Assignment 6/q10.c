#include <stdio.h>

int main() {
    int n, i, j, space;
    int c;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.");
    } else {
        for (i = 0; i < n; i++) {
            // Print leading spaces
            for (space = 1; space < n - i; space++) {
                printf("  ");
            }

            c = 1;
            for (j = 0; j <= i; j++) {
                printf("%4d", c);
                c = c * (i - j) / (j + 1);
            }
            printf("\n");
        }
    }
    return 0;
}