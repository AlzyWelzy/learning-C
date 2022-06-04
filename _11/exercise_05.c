#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, num;
    ptr = malloc(sizeof(int));
    printf("The size of ptr is %d\n", sizeof(ptr));

    printf("Enter value for num:");
    scanf("%d", &num);

    ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d * %d is %d\n", num, (i + 1), num * (i + 1));

        ptr[i] = num * (i + 1);
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("The value of %d element is %d\n", i, ptr[i]);
    // }

    // realloc
    ptr = realloc(ptr, 15 * sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        printf("The value of %d * %d is %d\n", num, (i + 1), num * (i + 1));

        ptr[i] = num * (i + 1);
    }
    return 0;
}