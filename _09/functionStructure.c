#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp)
{
    printf("The employee %s code is %d and his salary is %0.2f.\n ", emp.name, emp.code, emp.salary);
}

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    (*ptr).code = 101;
    ptr->code = 101;
    ptr->salary = 10.1;
    (ptr->name, "ALZYWELZY");

    show(e1);
    return 0;
}