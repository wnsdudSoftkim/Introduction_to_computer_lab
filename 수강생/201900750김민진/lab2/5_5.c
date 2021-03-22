// Write a program that asks the user to enter the amount of taxable income,
// then displays the tax due.

#include <stdio.h>

int main_5_5()
{
	float income;

	printf("Enter the amount of taxable income: ");
	scanf_s("%f", &income);

	if (income >= 0 && income <= 750)
		printf("Your tax due: $%.2f\n", income * 0.01);

	else if (income > 750 && income <= 2250)
		printf("Your tax due: $%.2f\n", income * 0.02 + 7.50);

	else if (income > 2250 && income <= 3750)
		printf("Your tax due: $%.2f\n", income * 0.03 + 37.50);

	else if (income > 3750 && income <= 5250)
		printf("Your tax due: $%.2f\n", income * 0.04 + 82.50);

	else if (income > 5250 && income <= 7000)
		printf("Your tax due: $%.2f\n", income * 0.05 + 142.50);

	else if (income > 7000)
		printf("Your tax due: $%.2f\n", income * 0.06 + 230.00);

	else
		printf("You've entered wrong value.");

	return 0;
}