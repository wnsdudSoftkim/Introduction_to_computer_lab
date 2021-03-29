#include<stdio.h>

int main(void) {
	int num;
	int factorial = 1;
	printf("enter a number.");
	scanf_s("%d", &num);
	for (int i = num; i > 0; i--) {
		factorial *= i;
	}
	printf("%d", factorial);
}