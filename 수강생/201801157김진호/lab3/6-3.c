#include <stdio.h>
int gcd(int m, int n) {
	int i, remainder;
	if (n > m) {
		i = n;
		n = m;
		m = i;
	}
	while (n != 0) {
		remainder = m % n;
		m = n;
		n = remainder;
	}
	return m;
}


int main() {
	int a, b, c;
	printf("Enter a fraction: ");
	scanf_s("%d/%d", &a, &b);

	c=gcd(a, b);
	printf("In lowest terms: %d/%d", a / c, b / c);
}