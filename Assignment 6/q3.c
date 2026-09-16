#include<stdio.h>
int main ()
{
    int r=0,d,n,m;
    printf("Enter a 3 and above digit no. :  ");
    scanf("%d",&m);
    n=m;
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;

    }
    if(m==r)
    {
        printf("Your nummber is an Palindrom no.");

    }
    else
    {
        printf("Your number is not an Palindrom no.");
    }
    return 0;
}   