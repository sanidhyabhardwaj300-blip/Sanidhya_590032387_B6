//Column with Minimum Sum using recursion
#include <stdio.h>
int findMinSumColumn(int matrix[][10], int rows, int cols, int colIndex, int currentRow, int currentSum, int *minSum, int *minCol) {
    if (colIndex >= cols) {
        return 0;
    }
    if (currentRow < rows) {
        currentSum += matrix[currentRow][colIndex];
        findMinSumColumn(matrix, rows, cols, colIndex, currentRow + 1, currentSum, minSum, minCol);
    } else {
        if (currentSum < *minSum) {
            *minSum = currentSum;
            *minCol = colIndex;
        }
        findMinSumColumn(matrix, rows, cols, colIndex + 1, 0, 0, minSum, minCol);
    }
    return 0;
}
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    int matrix[10][10];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int minSum = __INT_MAX__;
    int minCol = -1;
    findMinSumColumn(matrix, rows, cols, 0, 0, 0, &minSum, &minCol);
    printf("The column with the minimum sum is: %d with a sum of %d\n", minCol, minSum);
    return 0;
}   