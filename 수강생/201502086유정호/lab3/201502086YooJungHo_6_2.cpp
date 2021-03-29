#include <stdio.h>

int main(void)
{
    int a,b,remain;

    printf("\nEnter two integers: ");
    scanf_s("%d %d", &a, &b);

    do
    {
        remain = a % b;
        a = b;
        b = remain;
    } while (b != 0);

    printf("Greatest common divisor: %d\n\n", a);

    return 0;
}