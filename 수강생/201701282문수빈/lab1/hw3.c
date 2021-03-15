#include <stdio.h>

int main(void) {
	float v, rad;
	float pi = 3.14;
	printf("rad : " );
	scanf("%f", &rad);

	v = (4.0f / 3.0f) * pi * rad * rad * rad;
	printf("volume : %f", v);

	return 0;
}
