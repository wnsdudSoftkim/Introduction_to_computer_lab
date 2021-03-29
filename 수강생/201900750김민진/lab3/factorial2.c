// Write a program that finds factorial of all numbers between numbers n and m.

#include <stdio.h>

int main_factorial2()
{
	int n, m, factorial;

	printf("Enter a start number: ");
	scanf_s("%d", &n);

	printf("Enter a end number: ");
	scanf_s("%d", &m);

	for (int i = n; i <= m; i++)
	{
		factorial = 1;

		for (int j = 2; j <= i; j++)
			factorial *= j;

		printf("%d ", factorial);
	}

	return 0;
}