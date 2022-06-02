#include <stdio.h>

typedef struct date
{
    int year;
    int month;
    int date;
} date;

void display(date d)
{
    printf("The date is %d/%d/%d.\n", d.year, d.month, d.date);
}

void dateCompare(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }

    if (d1.year < d2.year)
    {
        return -1;
    }

    if (d1.month > d2.month)
    {
        return 1;
    }

    if (d1.month < d2.month)
    {
        return -1;
    }

    if (d1.date > d2.date)
    {
        return 1;
    }

    if (d1.date < d2.date)
    {
        return -1;
    }
    return 0;
}

int main()
{
    date d1 = {22, 06, 02}; // 2002, June 02
    date d2 = {21, 02, 12}; // 2002, June 02
    display(d1);
    display(d2);
    return 0;
}