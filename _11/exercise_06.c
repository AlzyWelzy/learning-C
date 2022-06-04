#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = malloc(sizeof(int));
    printf("The size of ptr is %d\n", sizeof(ptr));

    //

    ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element.\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d element is %d\n", i, ptr[i]);
    }

    // realloc
    ptr = realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d element.\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d element is %d\n", i, ptr[i]);
    }

    // calloc
    ptr = calloc(10, sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d element.\n", i);
        scanf("%d", &ptr[i]);
    }
    return 0;
}