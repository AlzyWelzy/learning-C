#include <stdio.h>

float fahrenheit(float celsius);
float celsius(float fahrenheit);

int main()
{
    int option;
    printf("Enter 0 to convert temperature from F to C or 1 to convert from C to F.");
    scanf("%d", &option);
    if (option == 0)
    {
        float temperature;
        printf("Enter temperature to convert from fahrenheit to celsius: ");
        scanf("%f", &temperature);
        printf("The temperature from celsius to fahrenheit is %0.2f.\n", fahrenheit(temperature));
    }
    else
    {
        float temperature;
        printf("Enter temperature to convert from celsius to fahrenheit: ");
        scanf("%f", &temperature);
        printf("The temperature from celsius to fahrenheit is %0.2f.", celsius(temperature));
        printf("The temperature from celsius to fahrenheit is %0.2f.\n", celsius(temperature));
    }

    return 0;
}

float fahrenheit(float celsius)
{
    return (celsius * (9 / 5)) + 32;
}

float celsius(float fahrenheit)
{
    return ((fahrenheit - 32) * 5) / 9;
}