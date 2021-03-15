#include <stdio.h>

int main() {
	int x = 0;
	scanf_s("%d", &x);
	int formula_val = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
	printf("%d", formula_val);
}