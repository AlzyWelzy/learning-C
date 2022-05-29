#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    printf("Enter a number: ");
    scanf("%d", &c);
    printf("Enter a number: ");
    scanf("%d", &d);
    if (a <= b)
    {
        e = b;
    }
    else
    {
        e = a;
    }

    if (e <= c)
    {
        e = c;
    }

    if (e <= d)
    {
        e = d;
    }

    printf("%d is the highest.", e);
    return 0;
}