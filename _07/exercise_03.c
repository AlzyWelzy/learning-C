#include <stdio.h>

int main()
{
    int table[10], num;
    printf("Enter a number to generate the table of: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        table[i] = num * (i + 1);
    }
    printf("%d\n", sizeof(table));
    for (int i = 1; i < 10; i++)
    {
        printf("The multiple of %d to %d is %d.\n", num, i + 1, table[i]);
    }
    return 0;
}