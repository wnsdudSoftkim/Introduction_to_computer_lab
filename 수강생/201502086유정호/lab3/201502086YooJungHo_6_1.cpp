#include <stdio.h>

int main(void)
{
    float i, number, a;
    i = 1;
    a = 0;
    do
    {
        printf("\nEnter a number: ");
        scanf_s("%f", &number);

        if (number >= a) a = number;

        i++;
    } while (i <= 6);

    if (a > 0) printf("\nThe largest number entered was %.2f\n\n", a);
    else if (a == 0) printf("\nPlease enter a positive number.\n\n");
    return 0;
}