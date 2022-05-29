#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    // using for loop
    for (int i = 1; i <= num; i++)
    {
        sum = i + sum;
    }
    printf("The total of all numbers till %d is %d.\n", num, sum);

    return 0;
}