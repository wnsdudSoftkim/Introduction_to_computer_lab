
#include <stdio.h>

//Display a list of even numbers.

int main() {
	int a;
	printf("Enter a integer: ");
	scanf_s("%d", &a);
	a = a / 2 * 2;
	for (; a > 0; a -= 2) {
		printf("%d\n", a);
	}
}