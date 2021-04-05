#include <stdio.h>

//#7-7
int main_7()
{
	int num1, denom1, num2, denom2,r1,r2;
	char op;

	printf("Enter first fraction : ");
	scanf_s("%d/%d", &num1, &denom1);

	printf("Enter second fraction : ");
	scanf_s("%d/%d", &num2, &denom2);
	getchar();

	printf("Enter the operators(+,-,*,/) : ");
	scanf_s("%c", &op);;

	switch (op)
	{
	case '+':
		r1 = num1 * denom2 + num2 * denom1;
		r2 = denom1 * denom2;
		break;

	case '-':
		r1 = num1 * denom2 - num2 * denom1;
		r2 = denom1 * denom2;
		break;
	case '*':
		r1 = num1 * num2;
		r2 = denom1 * denom2;
		break;

	case '/':
		r1 = num1 * denom2;
		r2 = denom1 * num2;
		break;
	default :
		printf("error");
	}
	printf("The sum is %d/%d\n", r1, r2);
}

