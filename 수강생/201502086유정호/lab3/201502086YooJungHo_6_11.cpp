#include <stdio.h>

int main(void)
{
    int a, i;
    float end, fac, p;

    printf("\nEnter a number: ");
    scanf_s("%d", &a);
    end = 1;
    printf("\ne = 1");
 
    for (i = 1; i <= a; i++)
    {
        fac = p = i;
        while (p > 0)
        {
            if (p - 1 == 0) break;
            fac *= --p;
        }

        end += (1 / fac);
        printf(" + 1/%d!", i);
    }

    printf(" = %.4f\n\n", end);

    return 0;
}