#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a, b;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Sum of a + b is %d.\n", sum(*&a, *&b));
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}