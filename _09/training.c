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
    int a = 34;
    char b = 'g';
    float c = 234.3241;
    // employee e1;
    // e1.salary=34.454; ----> won't work without employee structure

    struct employee e1;
    e1.code = 100;
    e1.salary = 34.454;
    strcpy(e1.name, "Harry");

    printf("%d\n", e1.code);
    printf("%0.2f\n", e1.salary);
    printf("%s\n", e1.name);
    return 0;
}