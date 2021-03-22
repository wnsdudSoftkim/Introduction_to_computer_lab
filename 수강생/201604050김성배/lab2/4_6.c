#include <stdio.h>

int main() {

	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, first_sum, second_sum, total;

	printf("Enter the first 12 digits of an EAN : ");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

	first_sum = d2 + d4 + d6 + d8 + d12;
	second_sum = d1 + d3 + d5 + d7 + d9 + d11;
	total = 3 * first_sum + second_sum;

	printf("Check digit: %d", 9 - ((total - 1) % 10));

	return 0;
}