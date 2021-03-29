#include <stdio.h>

int main(void)
{
    int n, i;
    float factorial, a, result = 1;

    printf("\nEnter a number: ");
    scanf_s("%d", &n);

    printf("e=1");
    for (i = 1; i <= n; i++)
    {
        factorial = a = i;
        while (a > 0)
        {
            if (a == 1) break;
            factorial = factorial * (--a);
        }

        result = result + (1 / factorial);
        printf("+(1/%d!)", i);
    }

    printf("=%.5f\n\n", result);

    return 0;
}
