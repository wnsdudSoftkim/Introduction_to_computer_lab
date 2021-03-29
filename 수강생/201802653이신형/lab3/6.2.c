#include <stdio.h>

int gcd(int a, int b)
{
	int swap;
	while (b)
	{
		swap = a % b;
		a = b;
		b = swap;
	}
	return a;
}

int main(void)
{
	int a, b, result;
	printf("Enter two integers:");
	scanf_s("%d %d", &a, &b);

	result = gcd(a, b);
	printf("Greatest common divisor: %d \n", result);

	return 0;
}