#include <stdio.h>
int main_c(void)
{
	float dollar; 
	float tax;

	printf("Enter an amount");
	scanf_s("%f", &dollar);

	tax = (dollar = (dollar * 0.05f));
	printf("tax add : %f", tax);

	return 0;

}