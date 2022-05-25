#include <stdio.h>

int main()
{
    int number;
    printf("Input a number: ");
    scanf("%d", &number);
    printf("%d\n", number);
    if ((number % 97) == 0)
    {
        printf("Yes it is");
    }
    else
    {
        printf("Nope it don't");
    }
    return 0;
}