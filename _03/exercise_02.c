#include <stdio.h>

int main()
{
    int maths, science, english;
    float total;
    printf("Enter Marks in Maths: ");
    scanf("%d", &maths);
    printf("Enter Marks in Science: ");
    scanf("%d", &science);
    printf("Enter Marks in English: ");
    scanf("%d", &english);
    total = (maths + science + english) / 3;
    printf("Total Marks is %0.2f.", total);
    if (total < 40 || maths < 33 || science < 33 || english < 33)
    {
        printf("Unfortunately, you failed");
    }
    else
    {
        printf("CONGRAGULATIONS YOU PASSED!");
    }
    return 0;
}