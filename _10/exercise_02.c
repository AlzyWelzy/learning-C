#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("userNum.txt", "w");
    fscanf(ptr, "%d", &num);

    for (int i = 1; i <= 10; i++)
    {

        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}