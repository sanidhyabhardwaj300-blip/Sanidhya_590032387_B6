//Transpose of a Matrix
//Write a C program to find the transpose of a matrix using a pointer to an array.
#include <stdio.h>

int main() {
    int a[10][10];
    int r, c, i, j;
    int (*p)[10];

    p = a;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", (*(p + i) + j));
        }
    }

    printf("\nTranspose of matrix:\n");

    for(j = 0; j < c; j++) {
        for(i = 0; i < r; i++) {
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }

    return 0;
}