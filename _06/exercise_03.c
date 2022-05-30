#include <stdio.h>

void tenTimes(int *j);

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int *ptr = &a;
    tenTimes(*&ptr);
    printf("%d\n", a);
    return 0;
}

void tenTimes(int *j)
{
    *j = *j * 10;
    // printf("The ten times of this variable is %d.\n", *j);
}