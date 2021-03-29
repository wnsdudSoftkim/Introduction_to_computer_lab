#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter two integers : ");
    scanf_s("%d %d", &a, &b);

    do
    {
        c = a % b;
        a = b;
        b = c;
    } while (b != 0);

    printf("Greatest common divisor : %d", a);

    return 0;
}
