#include <stdio.h>

int main()
{
    int i = 1;
    int *j = &i;
    int **k = &j;
    printf("The value of i is %u.\n", **k);
    return 0;
}