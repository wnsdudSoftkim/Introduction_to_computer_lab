// The value of the mathematical constant e can be expressed as an infinite series:
// e = 1 + 1/1! + 1/2! + ...
// Write a program that approximates e by computing the value of
// 1 + 1/1! + 1/2! + ... + 1/n!
// where n is an integer entered by the user

#include <stdio.h>

int main_6_11()
{
	int n;
	float e = 1, num = 1;
	
	printf("Enter a integer: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		int j;
		num = 1;

		for (j = 1; j <= i; j++)
		{
			num *= j;
		}

		e += 1.0f / num;
	}

	printf("The approximate e: %.2f", e);

	return 0;
}