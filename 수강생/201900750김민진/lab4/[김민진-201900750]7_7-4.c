// Modify Programming Project 6 from Chapter 3
// so that the user may add, subtract, multiply, or divide two fractions
// (by entering either +, -, * or / between the fractions).

#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2;
	int result_num, result_denom;
	char opt;

	printf("Enter first fraction: ");
	scanf_s("%d/%d", &num1, &denom1);

	printf("Enter second fraction: ");
	scanf_s("%d/%d", &num2, &denom2);
	getchar();

	printf("Enter the operator: ");
	opt = getchar();

	switch (opt)
	{
	case '+':
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
		break;
	case '-':
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;
		break;
	case '*':
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
		break;
	case '/':
		result_num = num1 * denom2;
		result_denom = num2 * denom1;
		break;
	default:
		printf("Wrong operator\n");
		break;
	}

	printf("The result is %d/%d\n", result_num, result_denom);
	
	return 0;
}