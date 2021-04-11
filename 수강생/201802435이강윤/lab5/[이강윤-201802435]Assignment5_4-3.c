#include <stdio.h>
#define SIZE 5

int main(void)
{
    int Num_arr[SIZE], min;
    printf("Enter the 5 integer numbers: ");

    for (int i = 0; i < SIZE; i++)   // 요소 입력
    {
        scanf("%d", &Num_arr[i]);
        if (Num_arr[i] == '\n')
            break;
    }
    

    min = Num_arr[0];   // 5_3 과 마찬가지로 순차탐색으로 진행.
    for (int i = 0; i < SIZE; i++)  
    {
        if (Num_arr[i] <= min)
            min = Num_arr[i];
    }
    
    printf("The smallest element in a list is : %d", min);

    return 0;
}