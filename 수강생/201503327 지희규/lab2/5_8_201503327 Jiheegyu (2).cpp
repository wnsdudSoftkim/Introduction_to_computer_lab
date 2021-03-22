#include <stdio.h>

int main(void)
{
    int hour, min, a800am, a943am, a1119am, a1247pm, a200pm, a345pm, a700pm, a945pm, midnight24, midnight0;

    printf("Enter a 24-hour time : ");
    scanf_s("%d:%d", &hour, &min);

    min = hour * 60 + min;

    a800am = (60 * 8);
    a943am = (60 * 9) + 43;
    a1119am = (60 * 11) + 19;
    a1247pm = (60 * 12) + 47;
    a200pm = (60 * 14);
    a345pm = (60 * 15) + 45;
    a700pm = (60 * 19);
    a945pm = (60 * 21) + 45;

    midnight24 = (60 * 24);
    midnight0 = 0;

    if (min >= midnight24 || min < midnight0)
    {
        printf("Entered invalid time.");
    }
    else
    {
        printf("Closest departure time is ");
        if (min >= midnight0 && min < a800am)
        {
            printf("8:00 a.m., arriving at 10:16 a.m.");
        }

        if (min >= a800am && min < a943am)
        {
            if (min - a800am < a943am - min)
            {
                printf("8:00 a.m., arriving at 10:16 a.m.");
            }
            else
            {
                printf("9:43 a.m., arriving at 11:52 a.m.");
            }
        }
        if (min >= a943am && min < a1119am)
        {
            if (min - a943am < a1119am - min)
            {
                printf("9:43 a.m., arriving at 11:52 a.m.");
            }
            else
            {
                printf("11:19 a.m., arriving at 1:31 p.m.");
            }
        }
        if (min >= a1119am && min < a1247pm)
        {
            if (min - a1119am < a1247pm - min)
            {
                printf("11:19 a.m., arriving at 1:31 p.m.");
            }
            else
            {
                printf("12:47 p.m., arriving at 3:00 p.m.");
            }
        }
        if (min >= a1247pm && min < a200pm)
        {
            if (min - a1247pm < a200pm - min)
            {
                printf("12:47 p.m., arriving at 3:00 p.m.");
            }
            else
            {
                printf("2:00 p.m., arriving at 4:08 p.m.");
            }
        }
        if (min >= a200pm && min < a345pm)
        {
            if (min - a200pm < a345pm - min)
            {
                printf("2:00 p.m., arriving at 4:08 p.m.");
            }
            else
            {
                printf("3:45 p.m., arriving at 5:55 p.m.");
            }
        }
        if (min >= a345pm && min < a700pm)
        {
            if (min - a345pm < a700pm - min)
            {
                printf("3:45 p.m., arriving at 5:55 p.m.");
            }
            else
            {
                printf("7:00 p.m., arriving at 9:20 p.m.");
            }
        }
        if (min >= a700pm && min < a945pm)
        {
            if (min - a700pm < a945pm - min)
            {
                printf("7:00 p.m., arriving at 9:20 p.m.");
            }
            else
            {
                printf("9:45 p.m., arriving at 11:58 p.m.");
            }
        }

        if (min >= a945pm && min < midnight24)
        {
            printf("9:45 p.m., arriving at 11:58 p.m.");
        }
    }

    return 0;
}