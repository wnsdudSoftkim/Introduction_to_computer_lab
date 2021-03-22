// write a program that calculates how many digits a number contains

#include <stdio.h>

int main_5_1()
{
	int num;

	printf("Enter a number(0 ~ 999): ");
	scanf_s("%d", &num);

	if (num > 0 && num < 10)
		printf("The number %d has 1 digits.\n", num);

	else if (num > 9 && num < 100)
		printf("The number %d has 2 digits.\n", num);

	else if (num > 99 && num < 1000)
		printf("The number %d has 3 digits.\n", num);
	

	return 0;
}