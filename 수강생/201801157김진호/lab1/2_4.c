#include <stdio.h>

int main(void)
{
	float a, amount;
	printf("Enter an amout: ");
	scanf_s("%f", &a);

	amount = a * 1.05;
	printf("With tax added: %f $", amount);


}