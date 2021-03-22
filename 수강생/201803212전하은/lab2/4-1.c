#include <stdio.h>
int main4(void) {
	int num, first, second;
	
	printf("Enter a two-digit number: ");
	scanf_s("%d", &num);
	first = num % 10;
	second = num / 10;
	printf("The reversal is: %d%d\n", first,second);
	
	
	return 0;
}