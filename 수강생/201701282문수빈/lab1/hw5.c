#include <stdio.h>

int main(void)
{
    int x5, x4, x3, x2, x, value;
    printf("Enter value of x : ");
    scanf("%d", &x);

    x5 = x * x * x * x * x;
    x4 = x * x * x * x;
    x3 = x * x * x;
    x2 = x * x;

    value = (3*x5) + (2*x4) - (5*x3) - x2 + (7*x) - 6;

    printf("value :  %d", value);

    return 0;
}
