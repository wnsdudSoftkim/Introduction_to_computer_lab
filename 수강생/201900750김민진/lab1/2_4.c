// amount with 5% taxes added
#include <stdio.h>

main_4()
{
	float amount;

	printf("Enter a dollar-and-cents amount: ");
	scanf_s("%f", &amount);

	amount += amount * 0.05;

	printf("The amount with 5%% tax added: $%.2f\n", amount);

}