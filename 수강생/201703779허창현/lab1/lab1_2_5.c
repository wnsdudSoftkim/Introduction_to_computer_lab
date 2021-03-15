#include <stdio.h>

int main_5(void)
{
    float x, y;

    printf("Enter value for x: ");
    scanf_s("%f",&x);

    y = (3.0f * x * x * x * x * x) + (2.0f * x * x * x * x) - (5.0f * x * x * x) - (x * x) + (7.0f * x) - 6.0f;

    printf("Value of polynomial : %.2f", y);

    return 0;
}
