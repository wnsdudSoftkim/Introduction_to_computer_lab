# include <stdio.h>

int main(){
	float amount, tax_added;
	
	printf("Enter an amount : ");
	scanf_s("%f", &amount);
	tax_added = 1.05 * amount;
	printf("With tax added : $%.2f", tax_added);
	
	return 0;
}
