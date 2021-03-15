#include <stdio.h> ////////////////////// Chapter2 Question 2.5

int main(void)
{
    int a;

    printf("\nThe following polynomial will be calculated:\n");
    printf("(3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6)\n\n");

    printf("Enter a number a: ");
    scanf_s("%d", &a);
    printf("\n");

    a = (3 * (a * a * a * a * a)) + (2 * (a * a * a * a))
        - (5 * (a * a * a)) - (a * a) + (7 * a) - 6;

    printf("Answer: %d\n\n", a);

    return 0;
}
