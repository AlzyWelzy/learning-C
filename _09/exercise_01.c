#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
} vector;

int main()
{
    vector v1, v2;

    v1.x = 34;
    v1.y = 54;
    printf("X dim is %d and y dim is %d.\n", v1.x, v1.y);

    v2.x = 34;
    v2.y = 54;
    printf("X dim is %d and y dim is %d.\n", v2.x, v2.y);

    return 0;
}