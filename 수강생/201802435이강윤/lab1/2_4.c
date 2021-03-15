#include <stdio.h>

int main()
{
    float amount;
    float tax;
    float taxadded;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    tax = amount * 0.05;
    taxadded = amount + tax;

    printf("With tax added: %.2f", taxadded);

    return 0;

}