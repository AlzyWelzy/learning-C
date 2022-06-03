#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("randInt.txt", "r");
    fscanf(ptr, "%d", &num);
    printf("%d\n", num);
    fscanf(ptr, "%d", &num);
    printf("%d\n", num);
    fscanf(ptr, "%d", &num);
    printf("%d\n", num);
    fclose(ptr);
    return 0;
}