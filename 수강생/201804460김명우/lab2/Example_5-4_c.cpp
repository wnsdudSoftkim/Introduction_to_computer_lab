#include <stdio.h>
int main() {
	
	int knots;

	printf("Enter a number :");
	scanf_s("%d", &knots);

	if (knots < 0)
		printf("Error!");

	else if (knots >= 0, knots <= 1)
		printf("Calm");

	else if (knots >= 1, knots <= 3)
		printf("Lighte air");

	else if (knots >= 4, knots <= 27)
		printf("Breeze");

	else if (knots >= 28, knots <= 47)
		printf("Gale");

	else if (knots >= 48, knots <= 63)
		printf("Storm");

	else if (knots > 63)
		printf("Hurricane");
}