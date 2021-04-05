// Write a program that evaluates an expression
// The operands in the expression are the floating point numbers;
// the operators are +, -, * and /.
// The expression is evaluated from left to right
// no operator takes precedence over any other operator.

#include <stdio.h>

int main(void)
{
	float num, result;
	char opt;
	
	printf("Enter an expression: ");
	scanf("%f", &result);

	while (1)
	{
		while (1)
		{
			opt = getchar();

			if (opt == '+' || opt == '-' || opt == '*' || opt == '/' || opt == '\n')
				break;
		}

		if (opt == '\n') break;
		scanf("%f", &num);

		switch (opt)
		{
		case '+':
			result += num; break;
		case '-':
			result -= num; break;
		case '*':
			result *= num; break;
		case '/':
			result /= num; break;
		}
	}

	printf("Value of expression: %.1f\n", result);

	return 0;
}