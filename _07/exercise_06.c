#include <stdio.h>

int checker(int *arr, int *positive, int size)
{
    // for (int i = 0; i < size; i++)
    // {
    //     printf("The value of %d element is %d.\n", i + 1, arr[i]);
    // }
    // int numOfPositives;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("Current Element is %d.\n", arr[i]);
            *positive = *positive + 1;
            printf("Current Value of variable named positive is %d.\n", *positive);
        }
    }
    return *positive;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int positive = 0;
    int sizeOfArray = sizeof(arr) / 4;
    int num = checker(&arr, &positive, sizeOfArray);
    printf("This array have %d postive integers.\n", num);
    return 0;
}