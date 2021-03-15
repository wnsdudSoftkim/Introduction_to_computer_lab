#include <stdio.h>
#define pi 3.14

int main(void)
{
	float r;
	float sphere;
	printf("Enter radius of sphere: ");
	scanf_s("%f", &r);
	sphere = 4 / 3 * pi * r * r * r;
	printf("%f m^", sphere);

}