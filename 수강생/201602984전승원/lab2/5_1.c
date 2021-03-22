#include <stdio.h>

int main(void) {
	
	int num;
	printf("Enter a number: ");
	scanf_s("%d", &num);
	if (num >= 10000 || num < 0) {
		printf("please enter number which is less than four-digit. Exit program.");
		return;
	}

	if (num < 10) {
		printf("The number %d has %d digits.", num, 1);
	}
	else if (num >= 10 && num < 100) {
		printf("The number %d has %d digits.", num, 2);
	}
	else if (num >= 100 && num < 1000) {
		printf("The number %d has %d digits.", num, 3);
	}
	else if (num >= 1000 && num < 10000) {
		printf("The number %d has %d digits.", num, 4);
	}

	return 0;
}