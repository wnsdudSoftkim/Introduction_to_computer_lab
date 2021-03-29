#include <stdio.h>

int main(void) {
	
	int num1, num2;
	printf("Enter a fraction: ");
	scanf_s("%d/%d", &num1, &num2);
	int copy1 = num1;
	int copy2 = num2;

	while (num1 != 0 && num2 != 0) {
		if (num1 > num2) {
			num1 = num1 % num2;
		}
		else {
			num2 = num2 % num1;
		}
	}
	int GCD = num1 + num2;
	printf("In lowest terms: %d/%d", copy1 / GCD, copy2 / GCD);
}