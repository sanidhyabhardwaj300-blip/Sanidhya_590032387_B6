//Function is even or odd positive negative or zero number prime number and perfect number
#include<stdio.h>
int isEven(int);
int isOdd(int);
int isPositive(int);
int isPrime(int);
int isPerfect(int);

int isEven(int a)

{
    if(a%2==0)
        return 1;
    else
        return 0;
}
int isOdd(int a)
{
    if(a%2!=0)
        return 1;
    else
        return 0;
}
int isPositive(int a)
{
    if(a>0)
        return 1;
    else if(a<0)
        return -1;
    else
        return 0;
}
int isPrime(int a)
{
    if(a<=1)
        return 0;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
int isPerfect(int a)
{
    int sum=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
            sum+=i;
    }
    if(sum==a)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isEven(n))
    {
        printf("%d is even.\n", n);
    }
    else
    {
        printf("%d is odd.\n", n);
    }

    if (isPositive(n) == 1)
    {
        printf("%d is positive.\n", n);
    }
    else if (isPositive(n) == -1)
    {
        printf("%d is negative.\n", n);
    }
    else
    {
        printf("%d is zero.\n", n);
    }
    if (isPrime(n))
    {
        printf("%d is prime.\n", n);
    }
    else
    {
        printf("%d is not prime.\n", n);
    }
    if (isPerfect(n))
    {
        printf("%d is a perfect number.\n", n);
    }
    else
    {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}