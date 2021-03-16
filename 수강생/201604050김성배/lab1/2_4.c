#include <stdio.h>

int main() {
	float amount;
	float tax;

	printf("Enter an amount: ");
	scanf("%f", &amount);

	printf("With tax added: %.2f", (amount/100)*105);
}