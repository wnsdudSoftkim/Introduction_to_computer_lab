#include <stdio.h>
int main() {
	
	float income, tax;

	printf("Enter taxable income: ");
	scanf_s("%f", &income);

	printf("Tax is : $");

	if (income < 0)
		printf("Error!");
	else if (income < 750)
		printf("%.2f", income * 0.01);
	else if (income < 2250)
		printf("%.2f", 7.50 + ((income - 750) * 0.02));
	else if (income < 3750)
		printf("%.2f", 37.50 + ((income - 2250) * 0.03));
	else if (income < 5250)
		printf("%.2f", 82.50 + ((income - 3750) * 0.04));
	else if (income < 7000)
		printf("%.2f", 142.50 + ((income - 5250) * 0.05));
	else if (income > 7000)
		printf("%.2f", 230.00 + ((income - 7000) * 0.06));
}