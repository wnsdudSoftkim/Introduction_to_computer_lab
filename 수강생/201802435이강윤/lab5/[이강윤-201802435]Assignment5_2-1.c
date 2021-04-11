#include <stdio.h>
#define N 5
#define T 10

int main(void)
{
// Input elements to each set.
    char set1[N], set2[N], union_set_overlap[T], union_set[T], stack;
    int small, n = 0;

    printf("Enter 5 elements in set1 : ");
    scanf("%c %c %c %c %c", &set1[0], &set1[1], &set1[2], &set1[3], &set1[4]);
    getchar();
    printf("Enter 5 elements in set2 : ");
    scanf("%c %c %c %c %c", &set2[0], &set2[1], &set2[2], &set2[3], &set2[4]);

// set1, set2 원소들 -> union_set_overlap 배열에 넣기 (원소 중복O)
    for (int i = 0; i <= 4; i++) 
    {
        union_set_overlap[i] = set1[i];
        union_set_overlap[i + 5] = set2[i];
    }

// union_set_overlap 중복 원소 없애는 method
// 1. union_set_overlap 원소들을 배열해줌. (오름차순)
    for (int j = 0; j < T - 1; j++)
    {
        small = j;
        for (int k = j + 1; k < T; k++) 
        {
            if (union_set_overlap[k] < union_set_overlap[small])
                small = k;
        }
        stack = union_set_overlap[j];
        union_set_overlap[j] = union_set_overlap[small];
        union_set_overlap[small] = stack;
    }

// 2. union_set에 원소 중복을 없애고 저장함.
    union_set[0] = union_set_overlap[0];
    for (int l = 1; l < T; l++)
    {
        if (union_set_overlap[l] != union_set[n-1])
            union_set[n++] = union_set_overlap[l];
    }
    
    printf("set1 U set2 = { ");
    for (int k = 0; k < n-1; k++) 
    {
        printf("%c, ", union_set[k]);
        if (k == n-2)
            printf("%c\n}", union_set[k+1]);
    }
//==== Check each set's elements.====//
    // printf("\n set1: ");
    // for (int i = 0; i < N; i++)   printf("%c ", set1[i]);
    // printf("\n set2: ");
    // for (int j = 0; j < N; j++)   printf("%c ", set2[j]);
    // printf("\n union_set_overlap: ");
    // for (int j = 0; j < N*2; j++)   printf("%c ", union_set_overlap[j]);
    // printf("\n union_set: ");
    // for (int j = 0; j < N*2; j++)   printf("%c ", union_set[j]);

    return 0;
}