#include <stdio.h>

float forceOfAttraction(float mass);

int main()
{
    float mass;
    printf("Enter Mass: ");
    scanf("%f", &mass);
    printf("The force of attraction for Mass %0.2f would be %0.2f.\n", mass, forceOfAttraction(mass));
    return 0;
}

float forceOfAttraction(float mass)
{
    return (mass * 9.8);
}