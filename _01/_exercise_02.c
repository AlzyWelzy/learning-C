#include <stdio.h>

int main()
{
    float radius;
    printf("Enter the value for radius: ");
    scanf("%f", &radius);
    float areaOfCircle = (22 / 7) * radius * radius;
    printf("The area of this circle is %0.2f", areaOfCircle);
}