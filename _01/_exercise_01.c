#include <stdio.h>

int main()
{
    float length;
    float width;
    float area;

    printf("Enter the value for length: ");
    scanf("%f", &length);
    printf("Enter value for Width: ");
    scanf("%f", &width);
    area = length * width;
    printf("The area of this rectangle is %0.2f.", area);
    return 0;
}