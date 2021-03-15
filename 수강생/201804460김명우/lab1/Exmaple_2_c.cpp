#include <stdio.h>

int main() {

	float r = 0;

	printf("enter the radius : ");
	scanf_s("%f", &r);

	float v = 4.0f / 3.0f * 3.14 * r * r * r;

	printf("%f", v);

}