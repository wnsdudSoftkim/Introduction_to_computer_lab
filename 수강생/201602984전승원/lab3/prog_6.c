#include<stdio.h>

int main(void) {
	int n;
	int m;
	int factorial = 1;
	printf("enter a number.");
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	if (n < m) {
		for (int i = m; i >= n; i--) {
			factorial *= i;
		}
	}
	else {
		for (int i = n; i >= m; i--) {
			factorial *= i;
		}
	}
	printf("%d", factorial);
}