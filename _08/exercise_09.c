#include <stdio.h>

void checker(char st[], char check)
{
    char *ptr = st;
    while (*ptr != '\0')
    {
        if (*ptr == check)
        {
            printf("YES IT IS PRESENT! \n");
            printf("%c \n", *ptr);
            break;
        }
        ptr++;
    }
}

int main()
{
    char name[10] = "IAMALZY";
    char check;
    printf("Enter a character to check: ");
    scanf("%c", &check);
    checker(name, check);

    return 0;
}