/*
#include <stdio.h>

int main(void)
{
    float in, t;

    printf("\nEnter amount of income: ");
    scanf_s("%f", &in);

    if (in < 750)
    {
        t = in * 0.01;}
    else if (in >= 750 && in <= 2250)
    {
        t = 7.50 + ((in - 750) * 0.02);}
    else if (in >= 2250 && in <= 3750)
    {
        t = 37.50 + ((in - 2250) * 0.02);}
    else if (in >= 3750 && in <= 5250)
    {
        t = 82.50 + ((in - 3750) * 0.02);}
    else if (in >= 5250 && in <= 7000)
    {
        t = 142.50 + ((in - 5250) * 0.02);}
    else if (in > 7000)
    {
        t = 230.50 + ((in - 7000) * 0.02);}

    printf("Tax due: $%.2f\n\n", t);
    return 0;
}
*/