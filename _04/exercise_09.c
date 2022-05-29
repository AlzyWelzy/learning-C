#include <stdio.h>

int main()
{
    int num, sum = 1, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    // using while loop

    while (i <= num)
    {
        sum = i * sum;
        i++;
    }
    printf("The factorial of all numbers till %d is %d using while loop.\n", num, sum);

    // using do-while loop

    sum = 1, i = 1;

    do
    {
        sum = i * sum;
        i++;
    } while (i <= num);
    printf("The factorial of all numbers till %d is %d using do-while loop.\n", num, sum);

    return 0;
}