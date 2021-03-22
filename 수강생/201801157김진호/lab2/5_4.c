#include <stdio.h>

int main(void) {
	int windS; //windspeed
	printf("Enter a wind speed(in knots): ");
	scanf_s("%d", &windS);
	if (windS <1)
		printf("Calm");
	
	else if (windS <3)
		printf("Light air");
	
	else if (windS <27)
		printf("Breeze");

	else if (windS <47)
		printf("Gale");

	else if (windS < 63)
		printf("Storm");

	else if (63 < windS)
		printf("Hurricane");

}