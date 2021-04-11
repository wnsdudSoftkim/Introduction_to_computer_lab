#include <stdio.h>

int main(void)
{
    int elements[5], minimum;
    int i;

    printf("Enter 5 elements in A list :");
    for (i = 0; i < 5; i++)
    {
        scanf_s("%d", &elements[i]);
    }

    minimum = elements[0];
    for (i = 0; i < 5; i++)
    {
        if (minimum > elements[i])
        {
            minimum = elements[i];
        }
    }

    printf("Smallest element in A list : %d", minimum);


    return 0;
}
