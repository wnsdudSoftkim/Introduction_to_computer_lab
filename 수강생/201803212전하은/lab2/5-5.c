#include <stdio.h>
int main(void) {
	int income;
	float tax;

	printf("Enter the amount of taxable income : ");
	scanf_s("%d", &income);
	
	if (income <= 750)
		tax = income * 0.01;
	else if (income > 750 && income <= 2250)
		tax = 7.5 + income * 0.02;
	else if (income > 2250 && income <= 3750)
		tax = 37.5 + income * 0.03;
	else if (income > 3750 && income <= 5250)
		tax = 82.5 + income * 0.04;
	else if (income > 5250 && income <= 7000)
		tax = 142.5 + income * 0.05;
	else
		tax = 230.0 + income * 0.06;
	
	printf("Text due : %.2f", tax);
	return 0;
}