#include <stdio.h>
#include <cs50.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int remainder(int a, int b) { return a % b; }

int main(void)
{
    int a = get_int("Enter first number: ");
    int b = get_int("Enter second number: ");

    printf("Add = %d\n", add(a, b));
    printf("Subtract = %d\n", subtract(a, b));
    printf("Multiply = %d\n", multiply(a, b));
    printf("Remainder = %d\n", remainder(a, b));
}
