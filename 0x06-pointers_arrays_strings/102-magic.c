#include <stdio.h>


/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4};
    int *p;

    p = &a[2];
    *(p + 2) = 9;
    printf("a[2] = %d\n", a[2]);
    return (0);
}
