#include <stdio.h>


int main(void)
{
    float loan, interest, payment, monthly_interest,balance1, balance2, balance3;

    printf("Enter amount of loan: ");
    scanf_s("%f", &loan);
    printf("Enter interest rate: ");
    scanf_s("%f", &interest);
    printf("Enter monthly payment: ");
    scanf_s("%f", &payment);

    monthly_interest = (interest / 100) / 12;

    balance1 = loan - payment + (loan * monthly_interest);
    balance2 = balance1 - payment + (balance1 * monthly_interest);
    balance3 = balance2 - payment + (balance2 * monthly_interest);

    printf("\nBalance remaining after first  payment: $%.2f\n", balance1);
    printf("Balance remaining after second payment: $%.2f\n", balance2);
    printf("Balance remaining after third  payment: $%.2f\n", balance3);

    return 0;
}
