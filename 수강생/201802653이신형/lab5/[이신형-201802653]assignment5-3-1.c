#include <stdio.h>

int main(void)
{
    int elements[5], maximum;
    int i;

    printf("Enter 5 elements in A list :");
    for (i = 0; i < 5; i++)
    {
        scanf_s("%d", &elements[i]);
    }

    maximum = elements[0];
    for (i = 0; i < 5; i++)
    {
        if (maximum < elements[i])
        {
            maximum = elements[i];
        }
    }

    printf("largest element in A list : %d", maximum);

    
    return 0;
}