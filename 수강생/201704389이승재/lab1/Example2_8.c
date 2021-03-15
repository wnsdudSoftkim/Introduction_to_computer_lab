#include <stdio.h>
int main_f(void)
{
	float loan, rate, payment, monthly; //ÀÜ¾×, ±Ý¸®, ³³ÀÔ±Ý, ¸Å´Þ

	printf("Enter amount of loan: \n");
	scanf_s("%f", &loan);

	printf("Enter interest rate: \n");
	scanf_s("%f", &rate);

	printf("Enter monthly payment: \n");
	scanf_s("%f", &payment);

	monthly = (rate / 100) / 12;

	loan = (loan - payment) + (loan * monthly);
	printf("Balance remaining after first payment: $%.2f \n", loan);
    printf("Balance remaining after second payment: $%.2f \n", loan);
	printf("Balance remaining after third payment: $%.2f\n", loan);

	return 0;
}