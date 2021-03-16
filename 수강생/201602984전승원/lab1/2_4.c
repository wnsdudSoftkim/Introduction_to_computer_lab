#include <stdio.h>

float add_text(float amount) {
	return amount * 105.0f / 100.0f;
}

int main() {
	float amount = 0.1f;

	scanf("%f", &amount);
	printf("%f", add_text(amount));
}