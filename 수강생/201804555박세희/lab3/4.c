#include <stdio.h>

main() {


	int a, b, c, d;

	printf("Enter a range of numbers(two integers):");
	scanf_s("%d %d", &a, &b);

	printf("prime numbers: ");

	while (a < b) {
		d = 0;

		if (a <= 1) {
			++a;
			continue;
		}
		for (c = 2;c <= a / 2;++c) {
			if (a % c == 0) {
				d = 1;
				break;
			}
		}
		if (d == 0)
			printf("%d  ", a);
		++a;
	}

	return 0;
}