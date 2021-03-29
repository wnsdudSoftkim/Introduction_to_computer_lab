#include <stdio.h>

int main(void) {
	float amount;
	while (1) {
		printf("Enter value of trade: ");
		scanf_s("%f", &amount);

		if (amount == 0.00f) {
			break;
		}

		if (amount > 0.00f && amount < 2500.00f) {
			printf("Commission: $%.2f\n", 30.0f + amount * 0.017);
		}
		else if (amount >= 2500.00f && amount < 6250.00f) {
			printf("Commision: $%.2f\n", 56.0f + amount * 0.0066);
		}
		else if (amount >= 6250.00f && amount < 20000.00f) {
			printf("Commision: $%.2f\n", 76.0f + amount * 0.0034);
		}
		else if (amount >= 20000.00f && amount < 50000.00f) {
			printf("Commision: $%.2f\n", 100.0f + amount * 0.0022);
		}
		else if (amount >= 50000.00f && amount < 500000.00f) {
			printf("Commision: $%.2f\n", 155.0f + amount * 0.0011);
		}
		else if (amount >= 500000.00f) {
			printf("Commision: $%.2f\n", 255.0f + amount * 0.0009);
		}
		else {
			printf("Error. Please enter a valid amount.\n");
		}

		printf("Enter 0 to exit program.\n");

	}
}