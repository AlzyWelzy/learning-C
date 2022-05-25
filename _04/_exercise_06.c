#include <stdio.h>

int main()
{
    int number, stored;
    printf("Enter number: ");
    scanf("%d", &number);
    stored = number;
    for (int i = 1; i < stored; i++)
    {
        number = number * i;
    }
    printf("%d\n", number);
    return 0;
}