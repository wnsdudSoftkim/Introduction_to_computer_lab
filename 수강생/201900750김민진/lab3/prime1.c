// Write a program that checks if the entered number is a prime number.

#include <stdio.h>

int main_prime1()
{
	int n, prime = 1;

	printf("Enter a integer: ");
	scanf_s("%d", &n);

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			prime = 0;
			break;
		}
	}

	if (prime == 0 || n == 1)
		printf("%d is not prime number.\n", n);
	else
		printf("%d is prime number.\n", n);

	return 0;
}