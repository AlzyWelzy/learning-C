#include <stdio.h>

int main()
{
    float principleAmount;
    float noOfYears;
    float rateOfInterest;
    float simpleInterest;
    printf("Enter Principle Amount: ");
    scanf("%f", &principleAmount);
    printf("Enter number of years: ");
    scanf("%f", &noOfYears);
    printf("Enter Rate of Interest: ");
    scanf("%f", &rateOfInterest);
    simpleInterest = (principleAmount * noOfYears * rateOfInterest) / 100;
    printf(
        "The total amount you will have to pay after %0.2f years with interest rate of %0.2f for the principle amount of %0.2f will be %0.2f.", noOfYears, rateOfInterest, principleAmount, simpleInterest);

    return 0;
}