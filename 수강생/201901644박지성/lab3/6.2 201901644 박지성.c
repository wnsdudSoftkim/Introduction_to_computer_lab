#include <stdio.h>
int main(void)
{
	int num1, num2, gcd = 0;
	printf("Enter two integers: ");
	scanf_s("%d %d", &num1, &num2);

	for (int i = 1; i <= num1; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			gcd = i;
		}
	}

	printf("Gretest common divisor: %d\n", gcd);
	return 0;
}