#include <stdio.h>

int main(void) {

	double r, volume;
	double pi = 3.14;

	printf("enter a radius:\n");
	scanf("%lf", &r);

	volume = pi * 40.f / 30.f * r * r * r;

	printf("Sphere's volume is %lf", volume);

	return 0;



}