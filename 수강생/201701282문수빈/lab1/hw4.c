#include <stdio.h>

int main(void) {
	double amount, tax;
	
	printf("Enter an amount: ");
	scanf("%lf", &amount);
	
	tax = amount + (amount*0.05);
	printf("With tax added: %.2f", tax);
	
	return 0;
}
