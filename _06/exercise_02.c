#include <stdio.h>

void addressPrinter(int *j);
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    printf("The address of this variable i is %u.\n", &i);
    addressPrinter(&i);
    return 0;
}

void addressPrinter(int *j)
{
    printf("The address of j is %u\n", j);
}