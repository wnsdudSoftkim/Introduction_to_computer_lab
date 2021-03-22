#include<stdio.h>
int main_7(void)
{
	int a, b, c,d;
	int min, max;

	printf("Enter 4 Integers: ");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	if (a >= b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	if (c > max)
		max = c;
	if (c < min)
		min = c;

	printf("4 Integer \n");
	printf("Largest: %d \n", max);
	printf("Smallest: %d \n", min);

	return 0;
}