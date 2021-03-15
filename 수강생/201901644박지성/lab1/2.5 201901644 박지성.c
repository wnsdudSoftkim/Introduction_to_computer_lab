#include <stdio.h>

int main(void)
{
	float x, y;
	printf("Enter a value for x: ");
	scanf_s("%f", &x);

	y = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) 
		- (x * x) + (7 * x) - (6);
	printf("The value of the polynomial: %.2f", y);
	return 0;
}