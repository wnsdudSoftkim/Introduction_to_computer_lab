#include <stdio.h>
int main(void) {
	int i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5,  first, second;

	printf("Enter the first 11 digits of a UPC: ");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &j1, &i2, &j2, &i3, &j3, &i4, &j4, &i5, &j5, &i6);
	first = ( i1 + i2 + i3 + i4 + i5 + i6)*3;
	second = j1 + j2 + j3 + j4 + j5;
	printf("Chek digit : %d\n", 9 - (first + second - 1) % 10);


	return 0;
}