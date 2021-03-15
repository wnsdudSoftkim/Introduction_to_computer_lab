// program that calculates the remaining balance
// on a loan after the first, second, and third monthly payments.

#include <stdio.h>

main()
{
	float loan, rate, payment;

	printf("Enter amount of loan: ");
	scanf_s("%f", &loan);
	printf("Enter interest rate: ");
	scanf_s("%f", &rate);
	printf("Enter monthly payment: ");
	scanf_s("%f", &payment);

	rate = rate / 100 / 12;

	loan += loan * rate;
	loan -= payment;

	printf("Balance remaining after first payment: $%.2f\n", loan);

	loan += loan * rate;
	loan -= payment;

	printf("Balance remaining after second payment: $%.2f\n", loan);

	loan += loan * rate;
	loan -= payment;

	printf("Balance remaining after third payment: $%.2f\n", loan);
}