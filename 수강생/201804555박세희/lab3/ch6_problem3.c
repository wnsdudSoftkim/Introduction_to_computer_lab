#include <stdio.h>

main() {


	int m, n, x;


	printf("Enter a fraction:");
	scanf_s("%d/%d", &m, &n);

	if (n % m == 0) {

		printf("1/%d", n / m);
		return 0;
	}

	for (x = m / 2; x > 1; x--) {

		if (n % x == 0 && m % x == 0) {

			printf("%d/%d", m / x, n / x);
				return 0;
		}
	}

	printf("%d/%d", m, n);

	return 0;
}