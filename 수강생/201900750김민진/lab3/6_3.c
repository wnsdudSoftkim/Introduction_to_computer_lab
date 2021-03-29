// Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms

#include <stdio.h>

int main_6_3()
{
	int n1, n2, temp, numerator, denominator;

	printf("Enter a fraction: ");
	scanf_s("%d/%d", &numerator, &denominator);

	n1 = numerator, n2 = denominator;

	if (n1 < n2)
	{
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}

	while (1)
	{
		if (n2 == 0) break;

		temp = n1 % n2;

		n1 = n2;
		n2 = temp;
	}

	printf("In lowest terms: %d/%d\n", numerator / n1, denominator / n1);

	return 0;
}