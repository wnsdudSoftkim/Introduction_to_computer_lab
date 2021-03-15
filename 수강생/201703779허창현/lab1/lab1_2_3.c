#include <stdio.h>

int main_3(void)
{
	float pi = 3.141592f;
	float volume, r;

	printf("Enter the radius: ");
	scanf_s("%f",&r);

	volume = (4.0f / 3.0f) * pi * r * r * r;

	printf("Volume : %.1f\n", volume);
	return 0;
}
