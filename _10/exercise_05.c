#include <stdio.h>

int main()
{
    // write a program to modify a file containing an integer to double its value
    FILE *ptr;
    int num;
    ptr = fopen("integers.txt", "r");
    if (ptr == NULL)
    {
        printf("This file does not exist\n");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        fclose(ptr);
        printf("The value of num is %d\n", num);
        num = num * 2;
        ptr = fopen("integers.txt", "w");
        fprintf(ptr, "%d", num);
        fclose(ptr);
    }
    return 0;
}