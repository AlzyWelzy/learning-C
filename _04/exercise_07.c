#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + num * i;
    }
    printf("THe total of numbers occuring in the table of %d * 1 to %d * 10 is %d.\n ", num, num, sum);
    return 0;
}