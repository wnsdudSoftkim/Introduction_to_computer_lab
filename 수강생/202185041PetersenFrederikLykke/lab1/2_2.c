/* Sphere volume calculator */
#include <stdio.h>

int main(void)
{
//Radius = 10
int r = 10;

float pi = 3.14f;
//Calculating volume
float v = 4.0f/3.0f * pi * r * r * r;

printf("The volume of the sphere with radius %d is %f\n", r,v);

return 0;
}
