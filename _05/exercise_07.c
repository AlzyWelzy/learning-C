#include <stdio.h>

void printPattern(int number);

int main()
{
    int number;
    printf("Enter a Number: ");
    scanf("%d", &number);
    printPattern(number);
    return 0;
}

void printPattern(int number)
{

    if (number == 1)
    {
        printf("*\n");
        return;
    }

    printPattern(number - 1);
    for (int i = 0; i < (2 * number - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}