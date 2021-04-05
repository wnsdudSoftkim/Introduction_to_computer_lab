#include <stdio.h>

int main(void)
{
	int num1, num2;
	int denom1, denom2;
	char op;
	printf("Enter first fraction: ");
	scanf_s("%d/%d", &num1, &denom1);

	printf("Enter operator(+,-,*,or /): ");
	scanf_s("%s", &op);

	printf("Enter sceond fraction: ");
	scanf_s("%d/%d", &num2, &denom2);

	switch (op)
	{
		int result_num, result_denom;
		case '+':
			result_num = (num1 * denom2) + (num2 * denom1) ;
			result_denom = denom1 + denom2;

			printf("The sum is %d/%d \n", result_num, result_denom);
			break;

		case '-' :
			result_num = (num1 * denom2) - (num2 * denom1);
			result_denom = denom1 * denom2;
			printf("The sum is %d/%d \n", result_num, result_denom);
			break;
				 
		case '/' :
			result_num = (num1 * denom2);
			result_denom = denom1 * num2;
			printf("The sum is %d/%d\n", result_num, result_denom); 
			break;

		default:
			printf("pleas try again / :");
	}
	return 0;
}