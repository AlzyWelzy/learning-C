#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Enter value for c: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the greatest.\n", a);
        }
        else
        {
            printf("%d is the greatest.\n", c);
        }
    }
    else if (b > c)
    {
        printf("%d is the greatest.\n", b);
    }
    else
    {
        printf("%d is the greatest.\n", c);
    }
    return 0;
}