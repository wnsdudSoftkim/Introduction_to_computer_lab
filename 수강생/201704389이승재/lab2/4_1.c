#include<stdio.h>

int main(void)
{
	int input;

	printf("Enter a two-digit number :");
	scanf_s("%d", &input);
	
	printf("The reversal is : %d%d", input % 10, (input / 10) % input);

	return 0;
}