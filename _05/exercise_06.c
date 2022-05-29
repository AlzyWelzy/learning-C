#include <stdio.h>

int sumOfNaturalNumbers(int number);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The sum of first %d natural numbers is %d.\n", number, sumOfNaturalNumbers(number));
    return 0;
}

int sumOfNaturalNumbers(int number)
{
    if (number <= 1)
    {
        return number;
    }
    return number + sumOfNaturalNumbers(number - 1);
}