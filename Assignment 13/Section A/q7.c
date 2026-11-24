#include <stdio.h>

int main()
{
    int x = 25;

    int *p = &x;
    int **pp = &p;

    printf("Value using x = %d\n", x);
    printf("Value using *p = %d\n", *p);
    printf("Value using **pp = %d\n", **pp);

    printf("\nAddress of x = %p\n", (void *)&x);
    printf("Value stored in p = %p\n", (void *)p);
    printf("Address of p = %p\n", (void *)&p);
    printf("Value stored in pp = %p\n", (void *)pp);
    printf("Address of pp = %p\n", (void *)&pp);

    return 0;
}