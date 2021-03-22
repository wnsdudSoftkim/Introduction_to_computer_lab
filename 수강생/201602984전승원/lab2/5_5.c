# include <stdio.h>

int main(void) {

	float amount;
	float tax;
	printf("enter the amount of taxable income.");
	scanf_s("%f", &amount);

	if (amount < 750.00f)
		tax = 0.01f * amount;
	else if (amount >= 750.00f && amount < 2250.00f)
		tax = 7.50f + 0.02f * amount;
	else if (amount >= 2250.00f && amount < 3750.00f)
		tax = 37.50f + 0.03f * amount;
	else if (amount >= 3750.00f && amount < 5250.00f)
		tax = 82.50f + 0.04f * amount;
	else if (amount >= 5250.00f && amount < 7000.00f)
		tax = 142.50f + 0.05f * amount;
	else
		tax = 230.00f + 0.06 * amount;

	printf("Your tax due is %f", tax);
}