#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[20];
} employee;

int main()
{
    employee e1;
    employee *ptr;

    ptr = &e1;
    // (*ptr).code = 101;
    ptr->code = 101;
    printf("%d\n", e1.code);

    return 0;
}