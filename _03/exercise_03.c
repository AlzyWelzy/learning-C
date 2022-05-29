#include <stdio.h>

int main()
{
    float salary, incomeTax = 0;
    printf("Enter your salary: ");
    scanf("%f", &salary);
    if (salary > 250000 && salary <= 500000)
    {
        incomeTax = incomeTax + (salary - 250000) * 0.05;
    }
    else if (salary > 500000 && salary <= 1000000)
    {
        incomeTax = incomeTax + (salary - 500000) * 0.20;
    }
    else if (salary > 1000000)
    {
        incomeTax = incomeTax + (salary - 1000000) * 0.20;
    }

    printf("You will need to pay %0.2f for your salary of %f.\n", incomeTax, salary);
    return 0;
}