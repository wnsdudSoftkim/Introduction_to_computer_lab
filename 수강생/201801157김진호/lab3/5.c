//Display a factorial of a given number n.
#include <stdio.h>
int main() {
	int n;
	printf("Enter number: ");
	scanf_s("%d", &n);
	int sum = 1;
	for (int i = 1; i <= n; i++) {
		sum = sum * i;
	}
	printf("factorial of a given number : %d", sum);
}