/* Sphere volume calculator */
#include <stdio.h>

int main(void)
{
//Radius = 10

float r;
printf("Enter radius of sphere: ");
scanf("%f", &r);

float pi = 3.14f;
//Calculating volume
float v = 4.0f/3.0f * pi * r * r * r;

printf("The volume of the sphere with radius %f is %f\n", r,v);

return 0;
}
