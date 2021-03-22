#include <stdio.h>

int main() {
	int number, d1, d2;

	printf("Enter a two-digit number : ");
	scanf_s("%d", &number);

	d1 = number / 10;
	d2 = number % 10;

	printf("The reversal is : %d%d",d2,d1);
	
	return 0;

}