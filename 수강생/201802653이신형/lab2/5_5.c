#include <stdio.h>

int main(void)

{

	float income;

	printf("Enter the amount of taxable income: $ ");
	scanf_s("%f", &income);

	if (income < 750)
		printf("Amount of tax is $%.2f", income * 1 / 100);
	else if (income <= 2250)
		printf("Amount of tax is $%.2f", 7.50 + (income - 750) * 2 / 100);
	else if (income <= 3750)
		printf("Amount of tax is $%.2f", 37.50 + (income - 2250) * 3 / 100);
	else if (income <= 5250)
		printf("Amount of tax is $%.2f", 82.50 + (income - 3750) * 4 / 100);
	else if (income <= 7000)
		printf("Amount of tax is $%.2f", 142.50 + (income - 5250) * 5 / 100);
	else
		printf("Amount of tax is $%.2f", 230.00 + (income - 7000) * 6 / 100);

	return 0;

}