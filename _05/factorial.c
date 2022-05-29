#include <stdio.h>

int factorial(int number);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The factorial of first %d natural numbers is %d.\n", number, factorial(number));
    return 0;
}

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}