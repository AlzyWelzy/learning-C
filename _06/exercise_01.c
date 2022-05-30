#include <stdio.h>

int main()
{
    int userInput;
    printf("Enter a Natural Number for the variable: ");
    scanf("%d", &userInput);
    printf("The address of the variable is %u and the value is %u.\n", &userInput, *&userInput);
    return 0;
}