#include <stdio.h>

int main() {

	int x = 0;

	printf("Enter a value for x : ");
	scanf("%d", &x);

	int answer = 3*(x * x * x * x * x) + 2*(x * x * x * x) - 5*(x * x * x) - (x * x) + 7*x - 6;

	printf("%d", answer);
}