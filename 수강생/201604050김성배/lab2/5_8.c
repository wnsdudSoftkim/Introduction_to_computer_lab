#include <stdio.h>

int main() {
    int hour, minute, t1, t2, t3, t4, t5, t6, t7, t8;

  

    printf("Enter a 24-hour time: ");
    scanf_s("%d:%d", &hour, &minute);

    minute = hour * 60 + minute;

   
    t1 = (60 * 8); //8:00 a.m
    t2 = (60 * 9) + 43; //9:43 a.m
    t3 = (60 * 11) + 19; //11:19 a.m
    t4 = (60 * 12) + 47; //12:47 p.m
    t5 = (60 * 14); // 2:00 p.m
    t6 = (60 * 15) + 45; // 3:45 p.m
    t7 = (60 * 19); //7:00 p.m
    t8 = (60 * 21) + 45; //9:45 p.m

 
    printf("Closest departure time is ");
    if (minute >= 0 && minute < t1)
        printf("8:00 a.m., arriving at 10:16 a.m.");

    if (minute >= t1 && minute < t2)
    {
        if (minute - t1 < t2 - minute)
            printf("8:00 a.m., arriving at 10:16 a.m.");
        else
            printf("9:43 a.m., arriving at 11:52 a.m.");
    }
    if (minute >= t2 && minute < t3)
    {
        if (minute - t2 < t3 - minute)
            printf("9:43 a.m., arriving at 11:52 a.m.");
        else
            printf("11:19 a.m., arriving at 1:31 p.m.");
    }
    if (minute >= t3 && minute < t4)
    {
        if (minute - t3 < t4 - minute)
            printf("11:19 a.m., arriving at 1:31 p.m.");
        else
            printf("12:47 p.m., arriving at 3:00 p.m.");
    }
    if (minute >= t4 && minute < t5)
    {
        if (minute - t4 < t5 - minute)
            printf("12:47 p.m., arriving at 3:00 p.m.");
        else
            printf("2:00 p.m., arriving at 4:08 p.m.");
    }
    if (minute >= t5 && minute < t6)
    {
        if (minute - t5 < t6 - minute)
            printf("2:00 p.m., arriving at 4:08 p.m.");
        else
            printf("3:45 p.m., arriving at 5:55 p.m.");
    }
    if (minute >= t6 && minute < t7)
    {
        if (minute - t6 < t7 - minute)
            printf("3:45 p.m., arriving at 5:55 p.m.");
        else
            printf("7:00 p.m., arriving at 9:20 p.m.");
    }
    if (minute >= t7 && minute < t8)
    {
        if (minute - t6 < t8 - minute)
            printf("7:00 p.m., arriving at 9:20 p.m.");
        else
            printf("9:45 p.m., arriving at 11:58 p.m.");
    }

    if (minute >= t8 && minute < 60 * 24) 
        printf("9:45 p.m., arriving at 11:58 p.m.");
    


    return 0;

}