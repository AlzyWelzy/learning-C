#include <stdio.h>
int main()
{
    int i = 1, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    do
    {
        for (j = 1; j <= (2 * i - 1); ++j)
        {
            printf("*");
        }
        printf("\n");
        ++i;
    } while (i <= rows);

    return 0;
}
