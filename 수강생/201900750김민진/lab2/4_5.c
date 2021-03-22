// Write a program that computs check digit

#include <stdio.h>

int main_4_5()
{
	int d, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, sum1, sum2, check;

	printf("Enter 11 digits: ");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10);

	sum1 = d + i2 + i4 + i6 + i8 + i10;
	sum2 = i1 + i3 + i5 + i7 + i9;

	check = 9 - (((3 * sum1 + sum2) - 1) % 10);

	printf("Check digit is: %d\n", check);

	return 0;
}