#include <stdio.h>

int main(void)
{
    int number, digits;
    digits = -1;

    printf("Enter a number : ");
    scanf_s("%d", &number);

    if (number >= 0 && number <= 9)
    {
        digits = 1;
    }
    else if (number >= 10 && number <= 99)
    {
        digits = 2;
    }
    else if (number >= 100 && number <= 999)
    {
        digits = 3;
    }
    else if (number >= 1000 && number <= 9999)
    {
        digits = 4;
    }

    if (digits == -1)
    {
        printf("Wrong number");
    }
    else
    {
        printf("The number %d has %d digits", number, digits);
    }

    return 0;
}
