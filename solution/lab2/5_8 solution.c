// 다음 표는 한 도시에서 다른 도시로의 일일 항공편을
// 보여줍니다.
// 출발 시간 및 도착 시간
// 사용자에게 시간을 입력하도록 요청하는 프로그램을 
//작성하십시오 (24 시간 시계를 사용하여 시간 및 분 단위로 표시됨). 사용자가 입력 한 것과 가장 가까운 프로그램 :
// 24 시간제 입력 : 13 : 15
// 가장 가까운 출발 시간은 오후 12:47이며 
//오후 3시에 도착합니다.

#include<stdio.h>

int main(void) {
    int hour, minute;
    printf("Enter a 24-hour time : ");
    scanf_s("%d:%d", &hour, &minute);

    if (hour * 60 + minute < 480) {
        printf("Closet departure time is : 8:00 a.m, arriving at 10:16 a.m");
    }
    else if (480 < hour * 60 + minute && hour * 60 + minute < 583) {
        printf("Closet departure time is : 9:43 a.m, arriving at 11:52 a.m");
    }
    else if (583< hour * 60 + minute && hour * 60 + minute < 679) {
        printf("Closet departure time is : 11:19 a.m, arriving at 1:31 p.m");
    }
    else if (679 < hour * 60 + minute && hour * 60 + minute < 767) {
        printf("Closet departure time is : 12:47 p.m, arriving at 3:00 p.m");
    }
    else if (767 < hour * 60 + minute && hour * 60 + minute < 840) {
        printf("Closet departure time is : 2:00 p.m, arriving at 4:08 p.m");
    }
    else if (840 < hour * 60 + minute && hour * 60 + minute < 945) {
        printf("Closet departure time is : 3:45 p.m, arriving at 5:55 p.m");
    }
    else if (945 < hour * 60 + minute && hour * 60 + minute < 1140) {
        printf("Closet departure time is : 7:00 p.m, arriving at 9:20 p.m");
    }
    else if (1140 < hour * 60 + minute ) {
        printf("Closet departure time is : 9:45 p.m, arriving at 11:58 p.m");
    }
    return 0;
}
