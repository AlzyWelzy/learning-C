#include <stdio.h>

int main()
{
    float length, width, area;
    printf("Enter Length: ");
    scanf("%f", &length);
    printf("Enter Width: ");
    scanf("%f", &width);
    area = length * width;
    printf("The area of the rectangle is %0.2f.", area);
    return 0;
}