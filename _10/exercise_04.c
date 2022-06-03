#include <stdio.h>

int main()
{
    // take name and salary of two employees as input from the user and write them to a file in the following format:
    // name1 salary1
    // name2 salary2

    FILE *ptr;
    char name[20];
    int salary;
    ptr = fopen("employee.txt", "w");
    printf("Enter name of first employee: ");
    scanf("%s", name);
    printf("Enter salary of first employee: ");
    scanf("%d", &salary);
    fprintf(ptr, "%s %d\n", name, salary);
    printf("Enter name of second employee: ");
    scanf("%s", name);
    printf("Enter salary of second employee: ");
    scanf("%d", &salary);
    fprintf(ptr, "%s %d\n", name, salary);
    fclose(ptr);

    return 0;
}