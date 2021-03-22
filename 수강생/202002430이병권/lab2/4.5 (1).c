int main(void) {
	float amount, tax = 0.05;
	printf("Determine the total amount after tax\n");
	printf("Please enter your pre-tax amount: $");
	scanf("%f", &amount);
	printf("Total after tax: $%.2f\n", amount + (amount * tax));
	return 0;
}