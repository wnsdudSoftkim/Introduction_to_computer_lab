#include <stdio.h>

int main_b() {
	int r;

	printf("Enter the radius: ");
	scanf_s("%d", &r);

	printf("Sphere is: %f", (4.0f / 3.0f) * 3.14159f * (r * r * r));

}