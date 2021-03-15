#include <stdio.h>

int main(void)
{
    int x,answer;

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is what?\n");

    printf("Enter a number x : ");
    scanf_s("%d", &x);
    
    answer = 3 * (x * x * x * x * x) + 2 * (x * x * x * x)
        - 5 * (x * x * x) - x * x + 7 * x - 6;

    printf("Answer : %d", answer);

    return 0;
}
