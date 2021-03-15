#include <stdio.h>

int main(void)
{
	int x;

	printf("Enter value of x :");
	scanf_s("%d", &x);

	x = ((((3 * x + 2) * x - 5)*x - 1) * x + 7) - 6;

	printf("%d", x);

}