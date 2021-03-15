#include <stdio.h>
#define PI (3.141592653589793)

float get_volume(float radius) {
	return 4.0f / 3.0f * PI * radius * radius * radius;
}

int main() {
	float radius;
	scanf_s("%f", &radius);
	printf("%.6f", (get_volume(radius)));

	return 0;
}
