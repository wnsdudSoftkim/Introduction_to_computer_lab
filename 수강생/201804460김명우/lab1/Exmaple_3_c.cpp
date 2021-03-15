#include <stdio.h>

int main() {

	float amount = 0;

	printf("Enter an amount : ");
	scanf_s("%f", &amount);

	int taxadd = amount + (amount * 0.05);

	printf("With tax added : %d", taxadd);
}