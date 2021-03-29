#include <stdio.h>

int main(void)
{
    unsigned int i, j, mul;
    unsigned int a, b;

    printf("Enter numbers :");
    scanf_s("%d %d", &i, &j);

    for (a = i; a <= j; a++)
    {
        mul = 1;
        for (b = 1; b <= j; b++) mul *= b;
        printf("%2d!=%d\n", a, mul);
    }
    return 0;
}