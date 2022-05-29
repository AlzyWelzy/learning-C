#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter Value in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit is %0.2f.", fahrenheit);

    return 0;
}