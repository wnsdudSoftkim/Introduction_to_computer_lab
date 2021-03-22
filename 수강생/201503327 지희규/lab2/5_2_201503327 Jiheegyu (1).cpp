#include <stdio.h>

int main(void)
{
    int hours24, hours12, min;

    printf("Enter a 24-hour time : ");
    scanf_s("%d:%d", &hours24, &min);

    if (hours24 > 12 && hours24 <= 24)
    {
        hours12 = hours24 - 12;
    }
    else
    {
        hours12 = hours24;
    }

    printf("Equivalent 12-hour time : %d:%.2d ", hours12, min);

    if (hours24 == 24)
    {
        printf("AM");
    }
    else if (hours24 >= 12)
    {
        printf("PM");
    }
    else
    {
        printf("AM");
    }

    return 0;
}