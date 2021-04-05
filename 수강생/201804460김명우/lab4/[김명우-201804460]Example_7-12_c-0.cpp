#include <stdio.h>

int main() {
	
	char operator1, operator2;
	float operand1, operand2, operand3, value;

	printf("Enter an expression: ");
	scanf_s("%f%c%f%c%f", &operand1, &operator1, &operand2, &operator2, &operand3);

	value = operand1;

	switch (operator1) {

	case '+':
		value += operand2;
		break;
	case '-':
		value -= operand2;
		break;
	case '*':
		value *= operand2;
		break;
	case '/':
		value /= operand2;
		break;
	}

	switch (operator2) {
	
	case '+':
		value += operand3;
		break;
	case '-':
		value -= operand3;
		break;
	case '*':
		value *= operand3;
		break;
	case '/':
		value /= operand3;
		break;
	}
	printf("Value of expression: %.1f\n\n", value);
	return 0;
}