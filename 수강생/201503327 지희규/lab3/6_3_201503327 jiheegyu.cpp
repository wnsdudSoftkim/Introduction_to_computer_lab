#include <stdio.h>

int main(void)
{
    int a, b, c, result1, result2;

    printf("Enter a fraction : ");
    scanf_s("%d/%d", &a, &b);

    result1 = a;
    result2 = b;

    do
    {
        c = a % b;
        a = b;
        b = c;
    } while (b != 0);

    result1 /= a;
    result2 /= a;

    printf("In lowest terms : %d/%d", result1, result2);

    return 0;
}
