#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("Enter amount of income : ");
    scanf_s("%f", &income);

    if (income < 750)
    {
        tax = income * 0.01;
    }
    else if (income >= 750 && income <= 2250)
    {
        tax = 7.50 + ((income - 750) * 0.02);
    }
    else if (income >= 2250 && income <= 3750)
    {
        tax = 37.50 + ((income - 2250) * 0.02);
    }
    else if (income >= 3750 && income <= 5250)
    {
        tax = 82.50 + ((income - 3750) * 0.02);
    }
    else if (income >= 5250 && income <= 7000)
    {
        tax = 142.50 + ((income - 5250) * 0.02);
    }
    else if (income > 7000)
    {
        tax = 230.50 + ((income - 7000) * 0.02);
    }

    printf("Tax due : $%.2f", tax);

    return 0;
}
