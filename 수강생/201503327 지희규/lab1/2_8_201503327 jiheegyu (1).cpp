#include <stdio.h>

int main(void)
{
    float loan, rate, payment;

    printf("Enter the amount of loan : ");
    scanf_s("%f", &loan);

    printf("Enter interest rate : ");
    scanf_s("%f", &rate);

    printf("Enter monthly payment : ");
    scanf_s("%f", &payment);

    rate = (rate * 0.01f) / 12;
    loan = (loan - payment) + loan * rate;

    printf("Balance remaining after first payment :  $%.2f\n", loan);

    loan = (loan - payment) + loan * rate;
    printf("Balance remaining after second payment : $%.2f\n", loan);

    loan = (loan - payment) + loan * rate;
    printf("Balance remaining after third payment : $%.2f", loan);

    return 0;
}
