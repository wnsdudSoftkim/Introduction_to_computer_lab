/*
#include <stdio.h>

int main(void)
{
    int number, d;
    d = -1;

    printf("\nEnter a number up to 4 digits: ");
    scanf_s("%d", &number);

    if (number >= 0 && number <= 9)
        d = 1;
    else if (number >= 10 && number <= 99)
        d = 2;
    else if (number >= 100 && number <= 999)
        d = 3;
    else if (number >= 1000 && number <= 9999)
        d = 4;

    if (d == -1)
        printf("Invalid number.\n\n");
    else
    {
        printf("The number %d has %d digit\n\n", number, d);
        if (d != 1) printf("s");
    }
    return 0;
}
*/
