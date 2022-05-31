#include <stdio.h>

void sumAndAverage(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = *sum / 2;
}

int main()
{
    int a, b, sum;
    float avg;
    printf("Enter a natural number for a: ");
    scanf("%d", &a);
    printf("Enter a natural number for b: ");
    scanf("%d", &b);
    sumAndAverage(a, b, &sum, &avg);
    printf("The sum and average of these numbers are %d and %0.2f respectively.", sum, avg);
    return 0;
}