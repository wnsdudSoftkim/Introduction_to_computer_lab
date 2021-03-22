#include <stdio.h>

int main(void)
{
    int number, digit1, digit2;

    printf("Enter a two-digit number : ");
    scanf_s("%d", &number);

    digit1 = number / 10;
    digit2 = number % 10;

    printf("The reversal is : %d%d", digit2, digit1);

    return 0;
}
