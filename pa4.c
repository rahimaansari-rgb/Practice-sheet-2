#include <stdio.h>
#include <cs50.h>

int sign(int n)
{
    if (n > 0) return 1;

    else if (n < 0) return -1;

    else return 0;
}

int main(void)
{
    int n = get_int("enter number: ");

    int s = sign(n);

    if (s == 1)
        printf("positive\n");
    else if (s == -1)
        printf("negative\n");
    else
        printf("zero\n");
}
