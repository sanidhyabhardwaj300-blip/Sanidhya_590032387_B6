//Arithmetic Operation Using Function Pointers
#include <stdio.h>
void cal(int a,int b, int *sum, int *diff, int *prod, float *quot)
{
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
    if(b != 0)
        *quot = (float)a / b;
    else
        *quot = 0; 
}
int main()
{
    int m, n, sum, diff,prod,quot;
    float quot;
    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);
    cal(m, n, &sum, &diff, &prod, &quot);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %.2f\n", quot);
    return 0;
}