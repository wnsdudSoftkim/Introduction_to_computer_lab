// Write a program that prints the values of sizeof(int), sizeof(short), sizeof(long), sizeof(float), sizeof(double)
// and sizeof(long double)

#include <stdio.h>

int main(void)
{
	printf("size of int: %d byte\n", sizeof(int));
	printf("size of short: %d byte\n", sizeof(short));
	printf("size of long: %d byte\n", sizeof(long));
	printf("size of float: %d byte\n", sizeof(float));
	printf("size of double: %d byte\n", sizeof(double));
	printf("size of long double: %d byte\n", sizeof(long double));

	return 0;
}