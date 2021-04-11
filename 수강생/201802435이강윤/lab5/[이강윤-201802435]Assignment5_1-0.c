#include <stdio.h>
#define SIZE 5

int main(void)
{
    // Input elements to each set.
    char set1[SIZE], set2[SIZE], intersection_set[SIZE];
    int stack = 0;

    printf("Enter 5 elements in set1 : ");
    scanf("%c %c %c %c %c", &set1[0], &set1[1], &set1[2], &set1[3], &set1[4]);
    getchar();
    printf("Enter 5 elements in set2 : ");
    scanf("%c %c %c %c %c", &set2[0], &set2[1], &set2[2], &set2[3], &set2[4]);
    
    //교집합 set에 요소 추가하기
    for (int i = 0; i < SIZE; i++)  // set1's index number.
    {
        for (int j = 0; j < SIZE; j++)  // set2's index number.
        {
            if (set1[i] == set2[j]) 
            {
                intersection_set[stack] = set1[i];
                stack++;
            }
        }
    }
    
    printf("set1 ∩ set2 = { ");
    for (int k = 0; k < stack; k++) 
    {
        if (k == stack -1) 
        {
            printf("%c }", intersection_set[k]);
            break;
        }
        printf("%c, ", intersection_set[k]);
    }
    
//==== Check each set's elements.====//
    // printf("\n set1: ");
    // for (int i = 0; i < SIZE; i++)   printf("%c ", set1[i]);
    // printf("\n set2: ");
    // for (int j = 0; j < SIZE; j++)   printf("%c ", set2[j]);
    // printf("\n intersection_set: ");
    // for (int j = 0; j < stack; j++)   printf("%c ", intersection_set[j]);

    return 0;
}