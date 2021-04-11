#include <stdio.h>
#define SIZE 5

int main(void)
{
    int Num_arr[SIZE], max;
    printf("Enter the 5 integer numbers: ");

    for (int i = 0; i < SIZE; i++)   // 요소 입력
    {
        scanf("%d", &Num_arr[i]);
        if (Num_arr[i] == '\n')
            break;
    }
    

    max = Num_arr[0];   // 순차탐색으로 진입.
    for (int i = 0; i < SIZE; i++)
    {
        if (Num_arr[i] >= max)
            max = Num_arr[i];
    }
    
    printf("The largest element in a list is : %d", max);

    return 0;
}
