#include <stdio.h>

int main(void)
{
    int num;
    int a, b;
    // a * 10 + b * 1 = num

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    a = num / 10;
    b = num - 10 * a;

    printf("The reversal is: %1d%1d", b, a);

    return 0;
}