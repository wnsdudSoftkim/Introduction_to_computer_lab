// Write a program that displays a factorial of a given number n.

#include <stdio.h>

int main_factorial1()
{
	int n, factorial = 1;

	printf("Enter a integer: ");
	scanf_s("%d", &n);

	for (int i = 2; i <= n; i++)
		factorial *= i;

	printf("%d is factorial of %d.\n", factorial, n);

	return 0;
}