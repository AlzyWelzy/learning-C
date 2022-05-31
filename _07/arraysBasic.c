#include <stdio.h>

int main()
{
    // Naive way to create 4 ints
    int marks1, marks2, marks3, marks4;
    marks1 = 33;
    marks2 = 34;
    marks3 = 35;
    marks4 = 36;

    // Pro way to create 4 ints
    int marks[4];
    marks[0] = 33;
    marks[1] = 34;
    marks[2] = 35;
    marks[3] = 36;

    return 0;
}