#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);  // 10 입력
    int denominator;  // 팩토리얼을 할 분모
    long double stack, e = 1; 

    for (int i = 1; i <= num; ++i)  // i = 1 부터 내가 입력한 숫자까지 반복.
    {
        stack = 1;                  // stack을 1로 초기화. --> stack은 for문 밑에서 팩토리얼을 마친 분모 값이 될 것임.
        denominator = i;            // denom i로 초기화. --> i부터 시작.

        while (denominator >= 1)    // 해당 while문 --> 1*(denom)*(denom-1)*(denom-2)*..*1 까지 stack에 저장
        {
            stack *= denominator; 
            denominator--;
        }
        e += (1 / stack);           // 팩토리얼을 마친 stack을 1로 나누고 e에 더한 후, e에 할당. / 이제 i를 점점 키우면서 해줄 것임. 
    }
    
    printf("\nThe value of function that operates simillar with constant 'e' is\n");
    printf("%.8Lf\n", e);

    return 0;
}