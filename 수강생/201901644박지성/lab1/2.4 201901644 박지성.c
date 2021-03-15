#include <stdio.h>

#define tax_percentage 0.05
int main(void)
{
	float dollars_and_cents_amount, tax_added;

	printf("Enter an amount: ");
	scanf_s("%f", &dollars_and_cents_amount);

	tax_added = dollars_and_cents_amount+
		(dollars_and_cents_amount * tax_percentage);
	printf("With tax added: $%.2f", tax_added);
	return 0;
}