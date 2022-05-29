#include <stdio.h>

int main()
{
    float radius, height, areaOfCircle, areaOfCyclinder, volumeOfCyclinder, pi = 3.14;
    printf("Enter Radius: ");
    scanf("%f", &radius);
    printf("Enter Height: ");
    scanf("%f", &height);
    areaOfCircle = (pi)*radius * radius;
    areaOfCyclinder = 2 * (pi)*radius * height + 2 * areaOfCircle;
    volumeOfCyclinder = (pi)*radius * radius * height;
    printf("The Area of Circle is %0.2f.\n", areaOfCircle);
    printf("The Area of Cyclinder is %0.2f.\n", areaOfCyclinder);
    printf("The Volume of Cyclinder is %0.2f.\n", volumeOfCyclinder);
    return 0;
}