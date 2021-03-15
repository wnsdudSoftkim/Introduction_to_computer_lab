#include <stdio.h>

int main()
{
    int x;
    printf("Enter x : ");
    scanf("%d", &x);
    int one, two, three, four, five, six;
    int value;

    one = 3*x*x*x*x*x;
    two = 2*x*x*x*x;
    three = -(5*x*x*x);
    four = -(x*x);
    five = 7*x;
    six = -6;

    value = one + two + three + four + five + six;

    printf("Value is : %d", value);

    return 0;
}