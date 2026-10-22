//Symmetric Matrix using Recursion
#include <stdio.h>

int isSymmetric(int matrix[][10], int n, int i, int j) {
    if (i >= n || j >= n) {
        return 1;
    }
    if (matrix[i][j] != matrix[j][i]) {
        return 0;
    }
    return isSymmetric(matrix, n, i + 1, j + 1);
}

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[10][10];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (isSymmetric(matrix, n, 0, 0)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}