#include <stdio.h>

int main(void) {
	int num, a, b;
	printf("Enter a two-digit number: ");
	scanf("%d", &num);
	
	a = num/10;
	b = num%10;
	
	printf("The reversal is: %d%d", b, a);
	
	return 0;
}
