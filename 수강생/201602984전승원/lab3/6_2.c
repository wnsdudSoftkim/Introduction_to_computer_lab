#include <stdio.h>

int main(void) {
	int num1;
	int num2;
	printf("Enter two integers: ");
	scanf_s("%d %d", &num1, &num2);

	while (num1 != 0 && num2 != 0) {
		if (num1 > num2) {
			num1 = num1 % num2;
		}
		else {
			num2 = num2 % num1;
		}
	}
	printf("Greatest common divisor: %d", num1 + num2);
}