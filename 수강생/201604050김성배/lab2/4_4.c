#include <stdio.h>

int main() {
	int  number, d1, d2, d3, d4, d5;

	printf("Enter a number between 0 and 32767 : ");
	scanf_s("%d", &number);
	
	d5 = number % 8;
	number = number / 8;
	d4 = number % 8;
	number = number / 8;
	d3 = number % 8;
	number = number / 8;
	d2 = number % 8;
	number = number / 8;
	d1 = number % 8;

	printf("In octal, your number is : %d%d%d%d%d", d1, d2, d3, d4, d5);
	
	return 0;
}