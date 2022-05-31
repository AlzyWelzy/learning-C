#include <stdio.h>

int main()
{
    int arr[10];
    int *ptr;
    ptr = arr;
    ptr = ptr + 2;
    if (ptr == &arr[2])
    {
        printf("THEY POINT TO THE SAME ADDRESS BRO!\n");
    }
    else
    {
        printf("NOPE THEY DON'T!\n");
    }
    return 0;
}