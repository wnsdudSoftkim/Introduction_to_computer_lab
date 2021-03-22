#include <stdio.h>

main() {

	int a;

	printf("Enter a number between 0 and 32767:");
	scanf_s("%d", &a);

	printf("In octal, your number is:%0.5o", a);


}