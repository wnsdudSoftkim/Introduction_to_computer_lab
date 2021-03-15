#include <stdio.h>

int main_4(void)
{
	float money;

	printf("Enter an amount : ");
	scanf_s("%f",&money);

	money += money * 0.05;	

	printf("with tax added : $ %.2f",money);
	return 0;
}
