// Write a program that asks the user to enter a wind speed(in knots),
// then displays the corresponding description.

#include <stdio.h>

int main_5_4()
{
	int speed;

	printf("Enter a wind speed in knot: ");
	scanf_s("%d", &speed);

	if (speed >= 0 && speed < 1)
		printf("It's Calm.\n");

	else if (speed >= 1 && speed <= 3)
		printf("It's Light air.\n");

	else if (speed >= 4 && speed <= 27)
		printf("It's Breeze.\n");

	else if (speed >= 28 && speed <= 47)
		printf("It's Gale.\n");

	else if (speed >= 48 && speed <= 63)
		printf("It's Storm.\n");

	else if (speed > 63)
		printf("It's Hurricane.\n");

	else
		printf("You've entered wrong value.\n");

	return 0;
}