//Arithmatic operations

#include<stdio.h>
int add(int ,int );
int sub(int ,int );
float mul(int ,int );
float div(int ,int );
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
float mul(int a,int b)
{
    return (float)a*b;
}
float div(int a,int b)
{
    return (float)a/b; 
}
int main()
{
    int m,n,r;
    scanf("%d %d",&m,&n);


    {
        r=add(m,n);
        printf("Add: %d\n",r);
        printf("Addition: %d\n",add(m,n));
        printf("Subtraction: %d\n",sub(m,n));
        printf("Multiplication: %f\n",mul(m,n));
        if(n!=0)
        {
            printf("Division: %f\n",div(m,n));
        }
        else
        {
            printf("Division: Cannot divide by zero\n");
        }
    }
}