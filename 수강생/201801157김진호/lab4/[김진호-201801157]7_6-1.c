//print data size
#include <stdio.h>

int main() {

	int intType;
	short shortType;
	long longType;
	float floatType;
	double doubleType;
	long double longDoubleType;

	printf("Size of int : %d bytes\n", sizeof(intType));
	printf("Size of short : %d bytes\n", sizeof(shortType));
	printf("Size of long : %d bytes\n", sizeof(longType));
	printf("Size of float : %d bytes\n", sizeof(floatType));
	printf("Size of double : %d bytes\n", sizeof(doubleType));
	printf("Size of long double : %lu bytes\n", sizeof(longDoubleType));
}