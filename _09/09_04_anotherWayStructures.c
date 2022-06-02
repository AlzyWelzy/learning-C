#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee alzy =
        {
            100,
            34.23,
            "AlzyWelzy"};
    printf("The employee %s code is %d and his salary is %0.2f.\n ", alzy.name, alzy.code, alzy.salary);
    return 0;
}