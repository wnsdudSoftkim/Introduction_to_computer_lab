#include <stdio.h>

int main()
{
    int hour, minute;
    int converted_time;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    converted_time = hour * 60 + minute;

    if (converted_time < 531.5) {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    }
    else if (converted_time < 631) {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    }
    else if (converted_time < 723) {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    }
    else if (converted_time < 803.5) {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
    }
    else if (converted_time < 892.5) {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
    }
    else if (converted_time < 1042.5) {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    }
    else if (converted_time < 1222.4) {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    }
    else {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
    }
    

    return 0;
}