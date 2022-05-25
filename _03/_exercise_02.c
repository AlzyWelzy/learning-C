#include <stdio.h>

int main()
{
    float physics, chemistry, maths, total;

    printf("Enter Physics Marks: \n");
    scanf("%f", &physics);

    printf("Enter Chemistry Marks: \n");
    scanf("%f", &chemistry);

    printf("Enter Maths Marks: \n");
    scanf("%f", &maths);
    total = ((physics + chemistry + maths) / 300) * 100;

    if (total < 40 || physics < 33 || chemistry < 33 || maths < 33)
    {
        printf("Your total percentage is %f hence YOU FAILED", total);
    }
    else
    {
        printf("YOU PASSED!");
    }

    return 0;
}