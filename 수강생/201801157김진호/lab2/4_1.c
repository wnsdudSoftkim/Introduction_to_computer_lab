#include <stdio.h>

int main(void) {
	int n; //"i"is entered number
	printf("Enter a two-digit number: ");
	scanf_s("%d", &n);
	
	int sec; //second digit
	int fir; //first digit

	sec = n % 10;
	fir = n / 10;

	printf("The reversal is :%d%d",sec,fir);
	
	





}