#include <stdio.h>

int main(void)
{
    int a[10];
    int b[10];
    int c[10];
    int i, j, z = 0;

    printf("Enter 5 elements of A set: ");
    for (i = 0; i < 5; i++)
    {
        scanf_s("%d", &a[i]);
    }

    printf("Enter 5 elements of B set.: ");
    for (i = 0; i < 5; i++)
    {
        scanf_s("%d", &b[i]);
    }

    printf("Union of two sets: ");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (b[i] == a[j])
            {
                break;
            }
        }
        if (j == 5)
            printf("%d", b[i]);
    }
    printf("\n");
}
