#include<stdio.h>

int main_2(void)
{
	int input, d1, d2, d3, d4, d5;

	printf("Enter a number :");
	scanf_s("%d", &input);

	d5 = input % 8;
	input /= 8;

	d4 = input % 8;
	input /= 8;

	d3 = input % 8;
	input /= 8;

	d2 = input % 8;
	input /= 8;

	d1 = input % 8;
	input /= 8;

	printf("input number is : %1d%1d%1d%1d%1d", d1, d2, d3, d4, d5);

	return 0;
}