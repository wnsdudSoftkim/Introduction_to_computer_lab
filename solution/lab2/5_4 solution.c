// 다음은 바람의 힘을 추정하는 데 사용되는 보 퍼트 척도의 단순화 된 버전입니다.
// 속도 설명
// 1 차분 미만
// 1-3 가벼운 공기
// 4-27 브리즈
// 28-47 게일
// 48-63 폭풍
// 허리케인 63 이상
// 사용자에게 풍속을 입력하고 표시하는 프로그램 작성
#include <stdio.h>

int main(){
    int speed;
    printf("Enter speed(knots) : ");
    scanf("%d", &speed);

    printf("Wind Speed : ");

    if (speed < 1)
    {
        printf("Calm");
    }
    else if (speed >= 1 && speed <= 3)
    {
        printf("Light air");
    }
    else if (speed >= 4 && speed <= 27)
    {
        printf("Breeze");
    }
    else if (speed >= 28 && speed <= 47)
    {
        printf("Gale");
    }
    else if (speed >= 48 && speed <= 63)
    {
        printf("Storm");
    }
    else if (speed > 63)
    {
        printf("Hurricane");
    }

}
