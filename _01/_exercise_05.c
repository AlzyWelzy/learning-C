#include <math.h>
#include <stdio.h>
int main()
{
    float principleAmount;
    float interestRate;
    float numOfTimes;
    float timePeriod;

    float finalAmount;
    printf("Enter Principle Amount: ");
    scanf("%f", &principleAmount);
    printf("Enter Interest Rate: ");
    scanf("%f", &interestRate);
    printf("Enter Number of times interest applied per time period: ");
    scanf("%f", &numOfTimes);
    printf("Enter Time Period: ");
    scanf("%f", &timePeriod);

    finalAmount = pow(principleAmount * (1 + (interestRate / numOfTimes)), numOfTimes * timePeriod);

    printf("The compound interest you will get is %0.2f.", finalAmount);

    return 0;
}