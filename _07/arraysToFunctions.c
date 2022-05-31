#include <stdio.h>

// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element is %d is %d.\n", i + 1, *(ptr + i));
//     }
// }

void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element is %d is %d.\n", i + 1, ptr[i]);
    }
    ptr[5] = 666; // will be changed in the actual array as well.
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printArray(arr, 7);
    printf("%d\n", arr[5]);
    printArray(arr, 7);
    return 0;
}