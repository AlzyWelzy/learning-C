#include <stdio.h>

int main()
{
    FILE *ptr;
    int num, length;
    printf("Enter the integer you need the table of: ");
    scanf("%d", &num);
    printf("For how much length you want that table: ");
    scanf("%d", &length);
    ptr = fopen("table.txt", "w");
    for (int i = 1; i <= length; i++)
    {
        fprintf(ptr, "%d * %d = %d\n", num, i, num * i);
    }
    fclose(ptr);
    printf("Succesfully generated the table of %d to length %d in table.txt.\n", num, length);
    return 0;
}