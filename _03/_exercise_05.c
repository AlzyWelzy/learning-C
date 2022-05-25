#include <stdio.h>

int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    int ascii = (int)character;

    if (ascii >= 97 && ascii <= 122)
    {
        printf("YES ITS IN LOWERCASE!,%d\n", ascii);
    }
    else
    {
        printf("NOPE ITS NOT! %d\n", ascii);
    }

    return 0;
}