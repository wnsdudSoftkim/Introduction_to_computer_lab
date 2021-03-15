#include <stdio.h>

#define months_of_the_year 12
#define percentage 100.0
int main(void)
{
	float amount_of_loan, interest_rate, monthly_payment, monthly_interest_rate,
		balance_after_first_payment, balance_after_second_payment,
		balance_after_third_payment;

	printf("Enter amount of loan: ");
	scanf_s("%f", &amount_of_loan);
	printf("Enter interest rate: ");
	scanf_s("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf_s("%f", &monthly_payment);

	monthly_interest_rate = (interest_rate / percentage) / months_of_the_year;

	balance_after_first_payment = amount_of_loan - monthly_payment +
		(amount_of_loan * monthly_interest_rate);
	balance_after_second_payment = balance_after_first_payment - monthly_payment +
		(balance_after_first_payment * monthly_interest_rate);
	balance_after_third_payment = balance_after_second_payment - monthly_payment +
		(balance_after_second_payment * monthly_interest_rate);

	printf("Balance remaing after first payment: %.2f\n", balance_after_first_payment);
	printf("Balance remaing after second payment: %.2f\n", balance_after_second_payment);
	printf("Balance remaing after third payment: %.2f\n", balance_after_third_payment);

	return 0;
}
