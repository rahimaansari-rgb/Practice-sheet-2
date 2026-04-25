#include <stdio.h>
#include <cs50.h>

void count_even_odd(int arr[], int n, int *even, int *odd)
{
    *even = 0;
    *odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main(void)
{
    int n = get_int("enter size: ");
    int arr[n];

    for (int i = 0; i < n; i++)
        arr[i] = get_int("element: ");

    int even, odd;

    count_even_odd(arr, n, &even, &odd);

    printf("even = %d\n", even);
    printf("odd = %d\n", odd);
}
