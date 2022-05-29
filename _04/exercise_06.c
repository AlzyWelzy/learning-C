#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    // using while loop
    int i = 1;
    while (i <= num)
    {
        sum = i + sum;
        i++;
    }
    printf("The total of all numbers till %d is %d using while loop.\n", num, sum);

    // using do-while loop
    num, sum = 0, i = 1;
    do
    {
        sum = i + sum;
        i++;
    } while (i <= 10);
    printf("The total of all numbers till %d is %d using do-while loop.\n", num, sum);
    return 0;
}