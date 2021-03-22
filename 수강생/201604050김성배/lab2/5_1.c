#include <stdio.h>

int main() {
	int number, digits;
	digits = 0;

	printf("Enter a number(no more than four digits) : ");
	scanf_s("%d", &number);

	if (number >= 0 && number <= 9) {
		digits = 1;
	}

	else if (number >= 10 && number <= 99) {
		digits = 2;
	}

	else if (number >= 100 && number <= 999) {
		digits = 3;
	}

	else if (number >= 1000 && number <= 9999) {
		digits = 4;
	}
	
	if (digits ==0) {
		printf("Wrong number! Try again");
	}

	else {
		printf("The number %d has %d digit(s)", number, digits);
	}

	return 0;
}