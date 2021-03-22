#include<stdio.h>
int main_5(void)
{
	float income, tax;

	printf("Enter income: \n ");
	scanf_s("%f", &income);

	printf("Tax is: ");

	if (income < 750.00f)
		printf("%.2f", income * 0.01);
	else if (income < 2250.00f)
		printf("%.2f", 7.50f + ((income - 750.00f) * 0.02));
	else if (income < 3750.00f)
		printf("%.2f", 37.50f + ((income - 2250.00f) * 0.03));
	else if (income < 5250.00f)
		printf("%.2f", 82.50f + ((income - 3750.00f) * 0.04));
	else if (income < 7000.00f)
		printf("%.2f", 142.50f + ((income - 5250.00f) * 0.05));
	else
		printf("%.2f", 230.00f + ((income - 7000.00f) * 0.06));

	return 0;

	

}