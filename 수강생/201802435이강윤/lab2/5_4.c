#include <stdio.h>

int main(void)
{
    int wind_knots;
    printf("Enter a wind speed in knots: ");
    scanf("%d", &wind_knots);

    // There are too many range set to use 'switch' method
    if (wind_knots >= 1 && wind_knots <= 3)
    {
        printf("1-3(knots) speed = 'Light air'");
    }
    else if (wind_knots >= 4 && wind_knots <= 27)
    {
        printf("4-27(knots) speed = 'Breeze'");
    }
    else if (wind_knots >= 28 && wind_knots <= 47)
    {
        printf("28-47(knots) speed = 'Gale'");
    }
    else if (wind_knots >= 48 && wind_knots <= 63)
    {
        printf("48-63(knots) speed = 'Storm'");
    }
    else if (wind_knots > 63)
    {
        printf("Above 63(knots) speed = 'Hurricane");
    }
    else
    {
        printf("Less than 1(knots) speed = 'Calm'");
    }
    

    return 0;
}