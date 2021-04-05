#include<stdio.h>

int main(void)
{
	
	int num, num3;
	float num1;

	printf("Enter the expression: \n");
	scanf_s("%d %f %d", &num,&num1,&num3);

	printf("Value of expression : %d + %f * %d", num, num1, num3);

	return 0;
}