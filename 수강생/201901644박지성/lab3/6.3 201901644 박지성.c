#include <stdio.h>
int main(void)
{
	int num, denom, gcd;
	printf("Enter a fraction: ");
	scanf_s("%d/%d", &num, &denom);

	for (int i = 1; i <= num; i++) {
		if (num % i == 0 && denom % i == 0) {
			gcd = i;
		}
	}
	printf("In lowest terms: %d/%d", num / gcd, denom / gcd);
	return 0;
}