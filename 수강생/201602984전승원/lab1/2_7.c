#include <stdio.h>

int main() {
	int dollar = 0;
	scanf_s("%d", dollar);

	if (dollar / 20 != 0) {
		dollar = dollar % 20;
		printf("%d", dollar / 20);
	}
	else if (dollar / 10 != 0) {
		dollar = dollar % 10;
		printf("%d", dollar / 10);
	}
	else if (dollar / 5 != 0) {
		dollar = dollar % 5;
		printf("%d", dollar / 5);
	}
	else {
		printf("%d", dollar);
	}
}