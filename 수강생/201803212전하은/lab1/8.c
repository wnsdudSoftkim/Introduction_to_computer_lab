#include <stdio.h>

int main_8(void)
{
	float amount, rate, pay;
	float a, b, c;
	printf("Enter amount of loan : ");
	scanf_s("%f", &amount);
	printf("Enter interest rate : ");
	scanf_s("%f", &rate);
	printf("Enter monthly payment : ");
	scanf_s("%f", &pay);
	a = (amount - pay) * (1 + rate) / 100;
	b = (a - pay) * (1 + rate) / 100;
	c = (b - pay) * (1 + rate) / 100;
	printf("Balance remaining after first payment : %.2p", &a);
	printf("Balance remaining after second payment : %.2p", &b);
	printf("Balance remaining after thirdpayment : %.2p", &c);

	return 0;
}