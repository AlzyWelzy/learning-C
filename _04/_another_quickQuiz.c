#include <stdio.h>

int main()
{
    // int input = 4;
    // while (1 <= input)
    // {
    //     printf("%d\n", input);
    //     input--;
    // }

    int skip = 5;

    int i = 0;
    while (i < 10)
    {
        i++;
        if (i != skip)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
                }
    }

    return 0;
}