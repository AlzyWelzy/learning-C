#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[20];
} emp;

void show(emp emp1)
{
    printf("The employee %s code is %d and his salary is %0.2f.\n ", emp1.name, emp1.code, emp1.salary);
}

int main()
{
    emp e1;
    emp *ptr;

    ptr = &e1;
    (*ptr).code = 101;
    ptr->code = 101;
    ptr->salary = 10.1;
    (ptr->name, "ALZYWELZY");

    show(e1);
    return 0;
}