#include <stdio.h> ////////////////////// Chapter2 Question 2.8

int main(void)
{
    float loan, interest, monthlyPayment;

    printf("\nEnter the amount of loan: ");
    scanf_s("%f", &loan);
    printf("Enter interest rate: ");
    scanf_s("%f", &interest);
    printf("Enter monthly payment: ");
    scanf_s("%f", &monthlyPayment);

    interest = (interest * 0.01f) / 12;

    loan = (loan - monthlyPayment) + (loan * interest);
    printf("\nBalance remaining after first payment:  $%.2f", loan);
    loan = (loan - monthlyPayment) + (loan * interest);
    printf("\nBalance remaining after second payment: $%.2f", loan);
    loan = (loan - monthlyPayment) + (loan * interest);
    printf("\nBalance remaining after third payment:  $%.2f\n", loan);

    return 0;
}