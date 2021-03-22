#include <stdio.h>

int main(void) {
	int u1, u2, u3, u4, u5, u6, u7, u8, u9, u10, u11; //upc
	int c; //check digit
	int firstSum;
	int secondSum;
	int cal; // digit that calulated
	printf("Enter the first 11 digits of a UPC: ");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &u1,&u2, &u3, &u4, &u5, &u6, &u7, &u8, &u9, &u10, &u11);
	printf("Enter check digit: ");
	scanf_s("%d", &c);

	firstSum = u1 + u3 + u5 + u7 + u9 + u11;
	secondSum = u2 + u4 + u6 + u8 + u10;
	cal = ((firstSum * 3 + secondSum-1)%10);
	if (cal = c) {
		printf("Right");
	}
	else {
		printf("Wrong");
	}

}