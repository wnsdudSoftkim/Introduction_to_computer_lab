//3: For a given number n check if n  is a prime number.
#include <stdio.h>

int main() {
	int n;
	int	i; // counter
	int j = 2; // number that divide n
	printf("Enter a number: ");
	scanf_s("%d", &n);
	i = n - 1;
	while (1) {
		if (j <= i) {
			if (n % j == 0) {
				printf("Entered number isn't prime number.");
				break;
			}
			else {
				j++;
			}
		}
		else {
			printf("Entered number is prime number.");
			break;
		}
	}
}