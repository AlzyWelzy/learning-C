#include <stdio.h>

int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("The year is a leap year.\n");
    }
    else if (year % 100 == 0)
    {
        printf("The year is a leap year.\n");
    }
    else if (year % 400 == 0)
    {
        printf("The year is a leap year.\n");
    }
    else
    {
        printf("The year is not a leap year.\n");
    }

    return 0;
}