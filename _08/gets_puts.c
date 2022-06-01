#include <stdio.h>

int main()
{
    char s[50];
    printf("Enter your Name: ");
    gets(s);
    puts(s);
    printf("Your name is %s.\n", s);
    return 0;
}