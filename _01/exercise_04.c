#include <stdio.h>

int main()
{
    float principleAmount, timePeriod, interestRate, simpleInterest;
    printf("Enter Principle Amount: ");
    scanf("%f", &principleAmount);
    printf("Enter Time Period: ");
    scanf("%f", &timePeriod);
    printf("Enter Interest Rate: ");
    scanf("%f", &interestRate);
    simpleInterest = (principleAmount * timePeriod * interestRate) / 100;
    printf("Simple Interest would be %0.2f", simpleInterest);
    return 0;
}