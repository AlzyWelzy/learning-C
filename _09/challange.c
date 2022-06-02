#include <stdio.h>

typedef struct dateTime
{
    int year, month, date, hours, minutes, seconds;
} dateAndTime;

void display(dateAndTime dT)
{
    printf("The timestamp is %d-%d-%d %d:%d:%d.\n", dT.year, dT.month, dT.date, dT.hours, dT.minutes, dT.seconds);
}

int dateCompare(dateAndTime d1, dateAndTime d2)
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

    if (d1.hours > d2.hours)
    {
        return 1;
    }

    if (d1.hours < d2.hours)
    {
        return -1;
    }

    if (d1.minutes > d2.minutes)
    {
        return 1;
    }

    if (d1.minutes < d2.minutes)
    {
        return -1;
    }

    if (d1.seconds > d2.seconds)
    {
        return 1;
    }

    if (d1.seconds < d2.seconds)
    {
        return -1;
    }

    return 0;
}

int main()
{
    dateAndTime d1 = {22, 06, 02, 23, 52, 10}; // 2002, June 02
    dateAndTime d2 = {22, 06, 02, 13, 43, 25}; // 2002, June 02
    display(d1);
    display(d2);

    int a = dateCompare(d1, d2);
    printf("Date Comparison function returns: %d.\n", a);
    return 0;
}