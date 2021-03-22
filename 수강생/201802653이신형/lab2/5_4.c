#include <stdio.h>

int main(void)
{


	int speed;

	printf("Enter a wind speed: ");
	scanf_s("%d", &speed);

	if (speed < 1)
		printf("Description is Calm");
	else if (speed <= 3)
		printf("Description is Light air");
	else if (speed <= 27)
		printf("Description is Breeze");
	else if (speed <= 47)
		printf("Description is Gale");
	else if (speed <= 63)
		printf("Description is Storm");
	else
		printf("Description is Hurricane");

	return 0;


}