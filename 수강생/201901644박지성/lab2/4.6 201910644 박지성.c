#include <stdio.h>
int main(void)
{
	int i1, i2, i3, i4, i5, i6,
		j1, j2, j3, j4, j5, j6,
		f_sum, s_sum, total;
	printf("Enter the first 12 digits of an EAN: ");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &j1, &j2, &j3, &j4, &j5, &j6);
	f_sum = i2 + i4 + i6 + j2 + j4 + j6;
	s_sum = i1 + i3 + i5 + j1 + j3 + j5;
	total = (f_sum * 3) + s_sum;
	printf("Check digit: %d", (9-(total - 1) % 10));
	return 0;
}