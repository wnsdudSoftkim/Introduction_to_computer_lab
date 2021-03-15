#include <stdio.h>
int main_b(void)
{
	float vol,r;

	printf("Enter the radius");
	scanf_s("%f", &r);

	vol = 4 / 3 * 3.14 * r * r * r;

	printf("Volume of a sphere is %f.4 \n",vol);

	return 0;

}
