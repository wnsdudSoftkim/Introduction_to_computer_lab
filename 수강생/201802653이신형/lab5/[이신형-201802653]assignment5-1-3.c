#include <stdio.h>

int main(void)
{
    int a[20];
    int b[20];
    int c[20];
    int i = 0;
    int j = 0;

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

    printf("Intersection of two sets : ");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i] == b[j])
                printf("%d ", a[i]);
        }
    }
    printf("\n");
}
