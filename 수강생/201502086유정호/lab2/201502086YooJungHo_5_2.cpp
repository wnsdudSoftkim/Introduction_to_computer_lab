/*
#include <stdio.h>

int main(void)
{
    int a24, a12, min;

    printf("\nEnter a 24-hour time: ");
    scanf_s("%d:%d", &a24, &min);

    if (a24 > 12 && a24 <= 24)
        a12 = a24 - 12;
    else
        a12 = a24;

    printf("Equivalent 12-hour time: %d:%.2d ", a12, min);

    if (a24 == 24)
        printf("AM");
    else if (a24 >= 12)
        printf("PM");
    else
        printf("AM");

    printf("\n\n");
    return 0;
}
*/