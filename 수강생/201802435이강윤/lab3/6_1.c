#include <stdio.h>

int main(void)
{
    float num, stack; 
    //stack : 전에 입력받은 숫자와 지금 입력받은 숫자 중에서 더 큰 수를 저장하는 변수.
    do
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        if (stack <= num)
            stack = num;
    } while (num != 0);
    

    printf("\nThe largest number entered was %.2f", stack);
    
    return 0;
}