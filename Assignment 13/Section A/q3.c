#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("Initial pointer = %p, Value = %d\n", (void *)p, *p);

    p++;
    printf("After p++ = %p, Value = %d\n", (void *)p, *p);

    p--;
    printf("After p-- = %p, Value = %d\n", (void *)p, *p);

    p = p + 2;
    printf("After p + 2 = %p, Value = %d\n", (void *)p, *p);

    p = p - 1;
    printf("After p - 1 = %p, Value = %d\n", (void *)p, *p);

    printf("\nPointer moves by sizeof(int) = %zu bytes for each step.\n",
           sizeof(int));

    return 0;
}