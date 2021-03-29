#include <stdio.h>

int main() {
	int n, m, a;

	printf("Enter two integers: ");
	scanf_s("%d %d", &n, &m);

	while (m!=0) {
		a = n % m;
		n = m;
		m = a;
	}
	printf("Greatest common divisor: %d",n);
}