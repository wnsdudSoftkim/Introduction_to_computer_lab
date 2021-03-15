#include <stdio.h>

int main() {
	int x;

	printf("Enter a value for x : ");
	scanf_s("%d", &x);
	x = (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6;
	printf("Answer is %d", x);
}