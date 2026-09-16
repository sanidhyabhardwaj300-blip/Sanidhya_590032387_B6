#include<stdio.h>
int main()
{
    int a,i,n;
    printf("Enter an Integer for which you want to have a multiplication table: ");
    scanf("%d",&a);
    printf("Enter the number of terms you want to print: ");
    scanf("%d",&n);
    printf("Multiplication Table of %d is:\n",a);
    for(i=1;i<=n;i++)
    {
        printf("%d x %d = %d\n",a,i,a*i);
    }
    return 0;

}
