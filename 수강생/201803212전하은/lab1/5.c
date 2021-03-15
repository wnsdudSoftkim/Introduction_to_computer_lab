#include <stdio.h>

int main_5(void)
{
	float x;
	float y;
	printf("Enter an value : ");
	scanf_s("%f", &x);
	y = (3 * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
	printf("%f",&y);

	return 0;
}