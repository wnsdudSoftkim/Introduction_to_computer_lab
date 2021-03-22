#include <stdio.h>
#include <stdlib.h>

int main() {
    int hour, min, sin = 0;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    sin = hour * 60 + min;

    if (abs(480-sin) < abs(583-sin)) printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    else if (abs(583-sin) < abs(679-sin)) printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    else if (abs(679-sin) < abs(767-sin)) printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    else if (abs(767-sin) < abs(840-sin)) printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
    else if (abs(840-sin) < abs(945-sin)) printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
    else if (abs(945-sin) < abs(1140-sin)) printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    else if (abs(1140-sin) < abs(1305-sin)) printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");

}