#include <stdio.h>

int main(void)
{
	int x;

	printf("Enter value of x :");
	scanf_s("%d", &x);
	
	x = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;

	printf("%d", x);

}