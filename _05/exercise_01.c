#include <stdio.h>

float average(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Enter value for c: ");
    scanf("%d", &c);
    float result = average(a, b, c);
    printf("Result is %0.2f.\n", result);
    return 0;
}

float average(int a, int b, int c)
{
    return (float)(a + b + c) / 3;
}
