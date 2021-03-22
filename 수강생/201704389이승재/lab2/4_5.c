#include<stdio.h>

int main(void)
{
	int d, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, first_sum, second_sum, total;

	printf("Enter the 11 digits: ");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10);
	printf("Enter first group of five digits: ");

	first_sum = d + i2 + i4 + i6 + i8 + i10;
	second_sum = i1 + i3 + i5 + i7 + i9;
	total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	return 0;
}