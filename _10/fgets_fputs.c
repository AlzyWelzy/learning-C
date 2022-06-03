#include <stdio.h>

int main()
{
    FILE *ptr;

    // ptr = fopen("fgetDemoC.txt", "r");

    // char c = fgetc(ptr);

    // printf("The value of my character is %c.\n", fgetc(ptr));
    // printf("The value of my character is %c.\n", fgetc(ptr));
    // printf("The value of my character is %c.\n", fgetc(ptr));

    ptr = fopen("fputDemoC.txt", "w");

    putc('D', ptr);
    fclose(ptr);
    return 0;
}