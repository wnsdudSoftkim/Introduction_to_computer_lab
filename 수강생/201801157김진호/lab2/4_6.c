#include <stdio.h>

int main(void) {
	int e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12; // ean
	int c; //check digit
	int firstSum;
	int secondSum;
	int cal; // digit that calculated

	printf("Enter the first 12 digits of a EAN: ");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &e1, &e2, &e3, &e4, &e5, &e6, &e7, &e8, &e9, &e10, &e11, &e12);
	printf("Enter check digit: ");
	scanf_s("%d", &c);
	
	firstSum = e1 + e3 + e5 + e7 + e9 + e11;
	secondSum = e2 + e4 + e6 + e8 + e10 + e12;
	cal = 9 - (firstSum * 3 + secondSum - 1) % 10;

	if (cal = c) {
		printf("Right");
	}
	else {
		printf("Wrong");
	}

}
