#include <stdio.h>
#include <cs50.h>

int is_palindrome(int arr[], int len)

{
    for (int i = 0; i < len / 2; i++)
    
    {
        if (arr[i] != arr[len - i - 1])
            return 0;
    }
    return 1;
}

int main(void)
{
    int n = get_int("enter number: ");

    int arr[20];

    int len = 0;

    while (n > 0)
    {
        arr[len++] = n % 10;

        n /= 10;
    }

    if (is_palindrome(arr, len))

        printf("palindrome\n");


    else
        printf("not palindrome\n");
}
