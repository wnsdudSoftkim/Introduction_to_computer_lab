#include <stdio.h>

#define PI 3.14f
int main(void)
{
	float radius, volume;

	radius = 10.0f;
	volume = 4.0f / 3.0f * PI * radius * radius * radius;

	printf("The volume of a sphere: %.2f", volume);

	return 0;
}