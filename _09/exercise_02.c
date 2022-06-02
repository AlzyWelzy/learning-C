#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
} vector;

vector sumVector(vector v1, vector v2)
{
    vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    vector v1, v2;

    v1.x = 34;
    v1.y = 54;
    printf("X dim is %d and y dim is %d.\n", v1.x, v1.y);

    v2.x = 64;
    v2.y = 104;
    printf("X dim is %d and y dim is %d.\n", v2.x, v2.y);

    vector sum = sumVector(v1, v2);
    printf("X dim is %d and Y dim is %d.\n", sum.x, sum.y);

    return 0;
}