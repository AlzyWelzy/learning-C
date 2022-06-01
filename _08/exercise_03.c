#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter your name: ");
    gets(name);
    int i = 0;
    while (name[i] != '\0')
    {
        ++i;
    }
    printf("The length of your name is %d.\n", i);
    return 0;
}