#include <stdio.h>

void tenTimes(int j);

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    tenTimes(a);
    printf("%d\n", a);
    printf("The ten times of this variable (a) is %d.\n", a);
    return 0;
}

void tenTimes(int j)
{
    j = j * 10;
    printf("The ten times of this variable (j) is %d.\n", j);
}