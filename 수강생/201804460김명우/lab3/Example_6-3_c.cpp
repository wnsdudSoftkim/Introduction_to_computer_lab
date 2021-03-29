#include <stdio.h>

int main() {

	int m, n, remainder, numerator, denominator;

	printf("Enter a fraction:");
	scanf_s("%d/%d", &m, &n);

	while (n != 0) {
		remainder = m % n;
		m = n;
		n = remainder;
	}
	numerator = m / m;
	denominator = n / m;
	printf("In lowest terms: %d/%d", numerator, denominator);
}