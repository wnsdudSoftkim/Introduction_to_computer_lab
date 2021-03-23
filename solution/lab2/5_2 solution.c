// 사용자에게 24 시간을 요청하는 프로그램을 
// 작성한 다음 12 시간 형식으로 시간을 표시합니다.
// 24 시간제 입력 : 21:11
// 12 시간 상당 시간 : 오후 9시 11 분
// 12:00을 0:00으로 표시하지 않도록주의하세요.
#include <stdio.h>
#include <stdlib.h>  
int main() {
    int hour,minites;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hour,&minites);
   if (hour >= 12) { 
       if(hour ==24) {
            printf("Equivalent 12-hour time: %d:%.2d AM",hour-24,minites);
       }else {
            printf("Equivalent 12-hour time: %d:%.2d PM",hour-12,minites);
       }
   }else {
        printf("Equivalent 12-hour time: %d:%.2d AM",hour,minites);
   }
}
