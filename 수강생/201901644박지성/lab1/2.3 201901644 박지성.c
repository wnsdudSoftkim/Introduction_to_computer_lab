#include <stdio.h>

#define PI 3.14
int main(void)

{
	float radius, volume;
	printf("Enter radius of sphere: ");
	scanf_s("%f", &radius);

	volume = 4.0f / 3.0f * PI * radius * radius * radius;
	printf("The volume of a sphere: %.2f", volume);

	return 0;
}
