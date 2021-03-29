#include <stdio.h>

int main() {
	int n, m, a, b, c;

	printf("Enter a fraction: ");
	scanf_s("%d/%d", &n, &m);

	b = n;
	c = m;

	while (m != 0) {
		a = n % m;
		n = m;
		m = a;
	}
	printf("In lowest terms: %d/%d", b / n, c / n);

}