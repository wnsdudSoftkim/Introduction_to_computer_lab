#include <stdio.h>


main() {

	int speed;

	printf(" Enter a spped knots: ");
	scanf_s("%d", &speed);

	printf("\nSpeed(knots)     Description\n");


	if (speed <1 )
		printf("Less than1       Calm");

	else if (speed >= 1 && speed <= 3)
		printf("1-3              Light air");

	else if(speed >= 4 && speed <= 27)
		printf("4-27             Breeze");

	else if (speed >= 28 && speed <= 47)
		printf("28-47            Gale");

	else if (speed >= 48 && speed <= 63)
		printf("48-63            Storm");

	else if (speed >= 63)
		printf("Above63          Hurricane");


	return 0;


}