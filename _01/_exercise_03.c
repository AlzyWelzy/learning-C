#include <stdio.h>

int main()
{
    float centigrade;
    printf("Enter temperate in centigrade to convert into fahrenheit: ");
    scanf("%f", &centigrade);
    float farenheit = (centigrade * (9 / 5)) + 32;
    printf("The value for celcuis in fahrenheit is %0.2f", farenheit);
}