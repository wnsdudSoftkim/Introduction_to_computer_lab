#include <stdio.h>

int main() {

	int number = 0;

	printf("Enter a number: ");
	scanf_s("%d", &number);

	if (0 <= number, number <= 9)
		printf("The number %d has 1 digits", number);

	else if (10 <= number, number <= 99)
		printf("The number %d has 2 digits", number);

	else if (100 <= number, number <= 999)
		printf("The number %d has 3 digits", number);

	else if (1000 <= number, number <= 9999)
		printf("The number %d has 4 digits", number);

	else if (9999 < number)
		printf("Error!");
}