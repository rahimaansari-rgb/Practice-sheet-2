#include <stdio.h>
#include <cs50.h>

int is_leap(int y)
{
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        return 1;
    else
        return 0;
}

int main(void)
{
    int year = get_int("enter year: ");

    if (is_leap(year))
        printf("leap Year\n");
    else
        printf("not leap year\n");
}
