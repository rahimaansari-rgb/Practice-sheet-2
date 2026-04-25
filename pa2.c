#include <stdio.h>
#include <cs50.h>

float fahrenheit(float c)
{
    return (c * 9 / 5) + 32;
}

int main(void)
{
    float c = get_float("enter celsius: ");

    printf("fahrenheit = %.2f\n", fahrenheit(c));
}
