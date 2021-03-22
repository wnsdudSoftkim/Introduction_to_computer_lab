#include <stdio.h>

int main() {

	int number = 0;
	int octal = 0;

	printf("Enter a number between 0 and 32767: ", number);
	scanf_s("%d", &number);

	octal = number % 8 + (number / 8) % 8 * 10 + ((number / 8) / 8) % 8 * 100 + (((number / 8) / 8) / 8) % 8 * 1000 + ((((number / 8) / 8) / 8) / 8) % 8 * 10000;

	printf("In octal, your number is: %.5d\n", octal);
}