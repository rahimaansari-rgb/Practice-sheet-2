#include <stdio.h>
#include <cs50.h>

char grade(int marks)

{
    if (marks >= 80) return 'A';
    else if (marks >= 70) return 'B';
    else if (marks >= 60) return 'C';
    else if (marks >= 50) return 'D';
    else return 'F';
}

int main(void)
{
    int marks = get_int("enter marks: ");
    

    printf("grade = %c\n", grade(marks));
}
