#include <stdio.h>

int tenTimes(int *j);

int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    printf("The 10 times of this %u value is %u.\n", *&i, tenTimes(&i));
    return 0;
}

int tenTimes(int *j)
{
    return 10 * (*j);
}