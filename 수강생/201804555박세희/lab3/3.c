#include <stdio.h>

main() {

	int num, a,b = 0;

	printf("Enter a integer:");
	scanf_s("%d", &num);

	for (a = 2;a < num; a++) {

		if (num % a == 0)
			b++;
	}

	if (b == 0)
		printf("\nPrime number\n");
	else
		printf("\nNot a prime number\n");



}