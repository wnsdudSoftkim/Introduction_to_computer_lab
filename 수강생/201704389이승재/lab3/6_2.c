#include<stdio.h>

int main(void)
{
	int m, n, x;

	printf("Enter two integers: \n");
	scanf_s("%d%d", &m, &n);

	while (n != 0) {
		x = m % n;
		m = n;
		n = x;

	}
	printf("greatest common divisor(GCD) is : %d", m);

	return 0;
}