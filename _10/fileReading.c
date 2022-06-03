#include <stdio.h>

int main()
{
    FILE *ptr;
    int num, num2;
    ptr = fopen("alzytext.txt", "r");
    fscanf(ptr, "%d", &num);
    // fscanf(ptr, "%d", &num2);
    // fscanf(ptr, "%d", &num);
    printf("The value of num is %d.\n", num);
    printf("The value of num is %d.\n", num2);
    fclose(ptr);
    return 0;
}