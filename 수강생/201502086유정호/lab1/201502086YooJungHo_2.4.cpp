#include <stdio.h> ////////////////////// Chapter2 Question 2.4

int main(void)
{
    float MONEY;

    printf("\nEnter an amount: ");
    scanf_s("%f", &MONEY);

    MONEY = MONEY + (MONEY * 0.05f);

    printf("With tax added: $%.2f\n\n", MONEY);

    return 0;
}
