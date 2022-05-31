#include <stdio.h>

int main()
{
    int a = 1, b = 2;
    int *pOa = &a, *pOb = &b;
    printf("The value of a is %u.\n", *pOa);
    printf("The value of b is %u.\n", *pOb);
    printf("The address of a is %u.\n", pOa);
    printf("The address of b is %u.\n", pOb);
    printf("The address of pointer a is %u.\n", &pOa);
    printf("The address of pointer b is %u.\n", &pOb);
    pOa++;
    pOb--;
    // pOb = pOb - pOa;
    // pOa = pOa - pOb;
    printf("The value of a is %u.\n", *pOa);
    printf("The value of b is %u.\n", *pOb);
    printf("The address of a is %u.\n", pOa);
    printf("The address of b is %u.\n", pOb);
    printf("The address of pointer a is %u.\n", &pOa);
    printf("The address of pointer b is %u.\n", &pOb);
    if (pOa > pOb)
    {
        printf("The value a [%u] is greater than b.\n", *pOa);
    }
    else
    {
        printf("The value b [%u] is greater than a.\n", *pOb);
    }
    // printf("The value of a is %u.\n", *pOa);
    // printf("The value of b is %u.\n", *pOb);
    // printf("The address of a is %u.\n", pOa);
    // printf("The address of b is %u.\n", pOb);
    int x = pOb - pOa;
    int y = pOa - pOb;
    printf("The address of pointer a is %d.\n", x);
    printf("The address of pointer b is %d.\n", y);
    return 0;
}