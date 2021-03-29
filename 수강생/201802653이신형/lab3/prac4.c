#include <stdio.h>

int Prime_Number(int a);

int main(void) {
    int num;
    printf("Enter a number:");
    scanf_s("%d", &num);
    Prime_Number(num);
    return 0;
}

int Prime_Number(int a) {
    int count = 0; //약수의 개수를 알려주는 변수
    for (int i = 1; i <= a; i++) {        //1부터 입력한 수만큼 반복
        for (int j = 1; j <= i; j++) {
            if (i % j == 0)               //i에다가 1부터 i만큼 수를 나눠서 약수 개수 세기
                count++;
        }
        if (count == 2) // 소수이면 출력
            printf("%d ", i);
        count = 0; //약수의 개수 초기화
    }
    printf("\n");
    return 0;
}