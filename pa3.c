#include <stdio.h>
#include <cs50.h>

int is_even(int n)
{
    return n % 2 == 0;
}

int main(void)
{
    int n = get_int("enter number: ");

    if (is_even(n))
        printf("even\n");
    else
        printf("odd\n");
}
