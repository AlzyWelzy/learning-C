#include <stdio.h>

int main()
{
    int divider;
    printf("Enter a number: ");
    scanf("%d", &divider);
    if (divider % 97 == 0)
    {
        printf("Yes it is divisible by 97.\n");
    }
    else
    {
        printf("NOPE Its not.\n");
    }
    return 0;
}