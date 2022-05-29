#include <stdio.h>

int main()
{
    char check;
    printf("Enter a character: ");
    scanf("%c", &check);
    int toNum = check;
    if (toNum >= 97 && toNum <= 122)
    {
        printf("%d\n", toNum);
        printf("ITS LOWERCASE.\n");
    }
    else
    {
        printf("%d\n", toNum);
        printf("ITS NOT LOWERCASE.\n");
    }
    return 0;
}