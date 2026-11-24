#include <stdio.h>

void update_pointer(int **p, int *new_address)
{
    *p = new_address;
}

int main()
{
    int x = 10;
    int y = 20;

    int *p = &x;

    printf("Before updating pointer:\n");
    printf("p points to x\n");
    printf("Value = %d\n", *p);

    update_pointer(&p, &y);

    printf("\nAfter updating pointer:\n");
    printf("p points to y\n");
    printf("Value = %d\n", *p);

    return 0;
}