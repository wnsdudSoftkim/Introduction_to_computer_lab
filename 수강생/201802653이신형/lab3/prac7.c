#include <stdio.h>

int main(void)
{
    // 입력 숫자 
    int num;
    // i, j 는 각각 피보나치수열의 n번째 n+1번째 수 
    int i = 1, j = 1, n;
    // 반복문 변수 
    int k;
    // 피보나치 세대 입력 
    printf("몇 번째 세대까지 계산? ");
    scanf_s("%d", &num);
    printf("%d세대까지 피보나치 수열\n", num);
    // num 입력된 수까지 피보나치를 진행한다. 
    for (k = 1; k <= num; k++)
    {
        // k가 1이거나 2라면 1을 대입한다 
        // 피보나치는 1 1 에서 시작  
        if (k == 1 || k == 2)
        {
            n = 1;
        }
        // 아니라면 
        else
        {
            // i와 j를 더한다 즉 n 과 n+1의 수를 더한다. 
            n = i + j;
            // n번째 자리에 n+1 자리에 있던 수를 대입한다. 
            i = j;
            // n+1번째 자리에 n+2 자리에 위치하는수인 n을 대입한다. 
            j = n;
        }
        // 결과 출력 
        printf("%d\n", n);
    }
    return 0;
}