#include <stdio.h>

int main() {

	float n, a, b, e, f;

	printf("Enter a number: ");
	scanf_s("%f", &n);

	e = 1;
	
	for (a = 1; a <= n; a++) {
		f = 1;
		for (b = 1; b <= a; b++) {
			f *= b;
		}
		e += 1 / f;

	}
	printf("e = %f", e);
}