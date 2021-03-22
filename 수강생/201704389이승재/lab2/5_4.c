#include<stdio.h>
int main_4(void)
{
	int speed;

	prinf("Enter wind speed: ");
	scanf_s("%d", &speed);

	if (speed < 1)
		printf("Calm");
	else if (speed <= 3)
		printf("Light air");
	else if (speed <= 27)
		printf("Breeze");
	else if (speed <= 47)
		printf("Gale");
	else if (speed <= 63)
		printf("Storm");
	else
		print("Hurricane");

	return 0;
}