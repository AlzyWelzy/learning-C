#include <stdio.h>

void sumAndAverage(int *a, int *b)
{
    float i = *a;
    float j = *b;
    printf("The sum and average is %0.2f and %0.2f.\n", (i + j), (i + j) / 2);
}

int main()
{
    int a, b;
    printf("Enter a natural number for a: ");
    scanf("%d", &a);
    printf("Enter a natural number for b: ");
    scanf("%d", &b);
    sumAndAverage(&a, &b);
    return 0;
}