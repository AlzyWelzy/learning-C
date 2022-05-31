#include <stdio.h>

int main()
{
    int table[10];

    for (int i = 0; i < 10; i++)
    {
        table[i] = 5 * (i + 1);
    }
    printf("%d\n", sizeof(table));
    for (int i = 1; i < 10; i++)
    {
        printf("The multiple of 5 to %d is %d.\n", i + 1, table[i]);
    }
    return 0;
}