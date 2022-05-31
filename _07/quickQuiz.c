#include <stdio.h>

int main()
{
    int studentMarks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks for student %d: ", (i + 1));
        scanf("%d", &studentMarks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Marks of student %d is %d.\n", (i + 1), studentMarks[i]);
    }

    return 0;
}