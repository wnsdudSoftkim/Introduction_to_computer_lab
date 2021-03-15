// computes the volume of a sphere with the radius that user enters

#include <stdio.h>

main_3()
{
	float volume, pi = 3.141592;
	float r;

	printf("Enter a radius of the sphere: ");
	scanf_s("%f", &r);

	volume = 4.0f / 3.0f * pi * r * r * r;

	printf("The volume of a sphere is %f cube meter.\n", volume);
}
