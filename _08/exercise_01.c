#include <stdio.h>

int main()
{
    char name[10];
    printf("Enter you name: ");
    gets(name);
    printf("Your name is %s.\n", name);
    return 0;
}