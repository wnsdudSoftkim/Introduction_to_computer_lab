#include <stdio.h>
int main(void)
{
	int x;
	short y;
	long z;
	float a;
	double b;
	long double c;
	printf("Size of x is %d.\n", sizeof(x));
	printf("Size of y is %d.\n", sizeof(y));
	printf("Size of z is %d.\n", sizeof(z));
	printf("Size of a is %d.\n", sizeof(a));
	printf("Size of b is %d.\n", sizeof(b));
	printf("Size of c is %d.\n", sizeof(c));
	return 0;
}