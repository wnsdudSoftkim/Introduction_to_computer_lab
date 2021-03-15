#include <stdio.h>


int main(void) {
	float v;
	float pi = 3.14;
	int rad = 10;

	v = (4.0f / 3.0f) * pi * rad * rad * rad;
	printf("volume : %f", v);

	return 0;
}
