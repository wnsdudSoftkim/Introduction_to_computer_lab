#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_4(void)
{
	float amount;
	float tax;
	printf("Enter an amount : ");
	scanf_s("%f",&amount);
	printf("With tax added : ");
	tax = amount * 1.05f;
	printf("$%f",tax);

	return 0;
}