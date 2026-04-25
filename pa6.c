#include <stdio.h>
#include <cs50.h>

int max3(int a, int b, int c)
{
    int max = a;

    if (b > max) max = b;
    if (c > max) max = c;

    return max;
}

int main(void)
{
    int a = get_int("enter first: ");
    int b = get_int("enter second: ");
    int c = get_int("enter third: ");

    printf("max = %d\n", max3(a, b, c));
}
