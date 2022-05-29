#include <stdio.h>

int fibonacci(int number);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The value of fibonacci for %d is %d.\n", number, fibonacci(number));
    return 0;
}

int fibonacci(int number)
{
    if (number <= 1)
    {
        return number;
    }
    return fibonacci(number - 1) + fibonacci(number - 2);
}