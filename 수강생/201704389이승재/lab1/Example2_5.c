#include <stdio.h>
int main_d(void)
{
	int x;
	int y;

	printf("Value of x:");
	scanf_s("%d", &x);

	y = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;

	printf("y value : %d", y);

	return 0;
}