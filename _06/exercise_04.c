#include <stdio.h>

int sum(int *i, int *j);
int average(int *x, int *y);

int main()
{
    int a, b;
    printf("Enter first natural number: ");
    scanf("%d", &a);
    printf("Enter second natural number: ");
    scanf("%d", &b);
    printf("The values are %u and %u.\n", *(&a), *(&b));

    printf("The sum and average of these two numbers is %u and %u respectively.\n", sum(&a, &b), average(&a, &b));
    return 0;
}

int sum(int *i, int *j)
{
    return *i + *j;
}

int average(int *x, int *y)
{
    return (*x + *y) / 2;
}