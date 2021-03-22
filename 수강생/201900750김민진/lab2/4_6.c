#include <stdio.h>

int main_4_6()
{
	int d, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, sum1, sum2, check;

	printf("Enter 12 digits: ");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
		&d, &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11);

	sum1 = i1 + i3 + i5 + i7 + i9 + i11;
	sum2 = d + i2 + i4 + i6 + i8 + i10;

	check = 9 - (((3 * sum1 + sum2) - 1) % 10);

	printf("Check digit is: %d\n", check);

	return 0;
}