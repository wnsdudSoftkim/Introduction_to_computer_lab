#include <stdio.h>

int main()
{
    int hour, sec;
    int time_translator;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &sec);

    if (hour > 12)
    {
        hour -= 12;
        printf("Equivalent 12-hour time: %d:%02d PM", hour, sec);
    }
    else if (hour == 12)
    {
        printf("Equivalent 12-hour time: %d:%02d AM", hour, sec);
    }
    else
    {
        printf("Equivalent 12-hour time: %d:%02d AM", hour, sec);
    }

    return 0;
}