#include <stdio.h>

int main(void)
{
    float i = 1, a, largest = 0;

    do
    {
        printf("Enter a number : ");
        scanf_s("%f", &a);

        if (a >= largest)
        {
            largest = a;
        }

        i++;
    } while (i <= 6);

    printf("\nThe largest number entered was %.2f", largest);

    return 0;
}
