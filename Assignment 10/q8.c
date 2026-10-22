//Matrix Multiplication using recursion
#include <stdio.h>
void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int result[][10], int rowFirst, int colFirst, int rowSecond, int colSecond, int i, int j, int k) {
    if (i >= rowFirst) {
        return;
    }
    if (j < colSecond) {
        if (k < colFirst) {
            result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, colFirst, rowSecond, colSecond, i, j, k + 1);
        } else {
            multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, colFirst, rowSecond, colSecond, i, j + 1, 0);
        }
    } else {
        multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, colFirst, rowSecond, colSecond, i + 1, 0, 0);
    }
}
int main() {
    int rowFirst, colFirst, rowSecond, colSecond;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowFirst, &colFirst);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowSecond, &colSecond);
    if (colFirst != rowSecond) {
        printf("Error! column of first matrix should be equal to row of second.\n");
        return -1;
    }
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10] = {0};
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colFirst; j++) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rowSecond; i++) {
        for (int j = 0; j < colSecond; j++) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }
    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, colFirst, rowSecond, colSecond, 0, 0, 0);
    printf("Resultant matrix:\n");
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colSecond; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}