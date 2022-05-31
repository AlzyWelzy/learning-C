#include <stdio.h>

void printTable(int *multable, int num, int n)
{
    printf("The multiplication table of %d is :\n", num);
    for (int i = 0; i < n; i++)
    {
        multable[i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d * %d = %d.\n", num, i + 1, multable[i]);
    }
    printf("END OF TABLE!\n");
}

int main()
{
    int userInput, length;
    printf("Enter a natural number to print its table: ");
    scanf("%d", &userInput);
    printf("Enter the length of the table: ");
    scanf("%d", &length);
    int multable[3][length];
    printTable(multable[0], userInput, length);

    return 0;
}