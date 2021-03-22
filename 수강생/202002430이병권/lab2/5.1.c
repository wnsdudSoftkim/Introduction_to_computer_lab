int main(void) {
	float x, result;
	printf("Calculate the value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6\n");
	printf("Please enter a value for x: ");
	scanf("%f", &x);
	result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	printf("Result: %.2f\n", result);
	return 0;
}