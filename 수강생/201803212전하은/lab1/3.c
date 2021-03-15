#include <stdio.h>

int main_3(void)
{
	int r;
	printf("enter the radius : ");
	scanf_s("%d",&r);
	float v = 4.0f / 3.0f * 3.14f * r * r * r;
	printf("volume of a sphere : %f", v);

	return 0;
}