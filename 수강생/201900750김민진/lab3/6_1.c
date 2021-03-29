// Write a program that finds the largest in a series of numbers entered by the user.
// The program must prompt the user to enter numbers one by one.
// When the user enters 0 or a negative number, the program must display the largest nonnegative number entered

#include <stdio.h>

int main_6_1()
{
	float n, max = 0;

	while (1)
	{
		printf("Enter a number(enter 0 or negative number to terminate): ");
		scanf_s("%f", &n);

		if (n <= 0)
			break;
		else
		{
			if (max < n)
				max = n;
		}
	}

	printf("\n");
	printf("The largest number entered was %.2f", max);

	return 0;
}