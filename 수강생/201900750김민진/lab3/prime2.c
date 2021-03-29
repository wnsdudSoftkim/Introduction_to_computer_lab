// Write a program that displays a list of prime numbers between numbers n and m.

#include <stdio.h>

int main_prime2()
{
	int n, m, prime;

	printf("Enter a start number: ");
	scanf_s("%d", &n);

	printf("Enter a end number: ");
	scanf_s("%d", &m);

	for (int i = n; i <= m; i++)
	{
		prime = 1;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				prime = 0;
				break;
			}
		}

		if (prime == 1 && i > 1)
			printf("%d ", i);
	}

	return 0;
}