#include <stdio.h>

int main()
{
    int a = 0;
    int i = 1;
    do
    {
        a = a + i;
        i++;
    } while (i < 11);
    printf("%d\n", a);

    return 0;
}