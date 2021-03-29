#include <stdio.h>

int main() {

	int i, n;

	for (i = 1; i <= n; i++) {

		printf("Enter number: ");
		scanf_s("%d", &i);

		if (i % 2 == 1) {
			printf("%d", i);
		}
	}
}