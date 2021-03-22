#include <stdio.h>

int main() {

	int i = 0;
	int reversal = 0;
	
	printf("Enter a two-digit number:");
	scanf_s("%d", &i);

	reversal = (i % 10) * 10 + i / 10;

	printf("The reversal is:%d\n", reversal);


}