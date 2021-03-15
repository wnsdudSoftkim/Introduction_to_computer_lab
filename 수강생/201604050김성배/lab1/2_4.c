#include <stdio.h>

int main_c() {
	float amount;
	float tax;

	printf("Enter an amount: ");
	scanf_s("%f", &amount);

	printf("With tax added: %.2f", (amount/100)*105);
}