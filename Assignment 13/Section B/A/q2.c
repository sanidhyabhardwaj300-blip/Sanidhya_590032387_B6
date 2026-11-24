//Pointers with Arrays
//Row and Column Sum of a Matrix
//Write a C program to find the sum of each row and each column of a matrix using pointers.
#include <stdio.h>
void print_row_name(int rows, int cols, int (*matrix)[cols])
{
    int i, j, sum;
    for (i = 0; i < rows; i++)
    {
        sum = 0;
        for (j = 0; j < cols; j++)
        {
            sum += *(*(matrix + i) + j);
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }
}
void print_col_name(int rows, int cols, int (*matrix)[cols])
{
    int i, j, sum;
    for (j = 0; j < cols; j++)
    {
        sum = 0;
        for (i = 0; i < rows; i++)
        {
            sum += *(*(matrix + i) + j);
        }
        printf("Sum of column %d = %d\n", j + 1, sum);
    }
}
int main()
{
    int matrix[10][10], rows, cols, i, j;
    printf("Enter number of rows and columns:");
    scanf("%d%d", &rows, &cols);
    printf(" Enter elements of matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    print_row_name(rows, cols, matrix);
    print_col_name(rows, cols, matrix);
    return 0;
}