#include <stdio.h>

int main(void)
{

	int num1, denom1, num2, denom2, result_num, result_denom;
	int n;
	
	printf("Enter two fractions(first one is bigger) : ");
	scanf_s("%d/%d %d/%d", &num1, &denom1, &num2, &denom2);

	printf("\nselet a number \n1.Addition 2.Subtraction 3.Multiplication 4.Divide :");
	scanf_s("%d",&n);
	
	switch (n)
	{
	case 1:

		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
		printf("%d/%d\n", result_num, result_denom);
		break;
	case 2:
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;
		printf("%d/%d\n", result_num, result_denom);
		break;
	case 3:
		printf("%d/%d\n", num1 * num2, denom1 * denom2);
		break;
	case 4:
		printf("%d/%d\n", num1 * denom2, num2 * denom1);
		break;
	}
	

	return 0;
			
		
	}
