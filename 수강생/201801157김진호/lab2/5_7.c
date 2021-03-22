#include <stdio.h>

int main(void) {
	int a, b, c, d;
	printf("Enter four integers: ");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	int large, small;
	large = a;
	if (b > large) {
		large = b;
	}
	if (c > large) {
		large = c;
	}
	if (d > large) {
		large = d;
	}
	small = a;

	if (b < small) {
		small = b;
	}
	if (c < small)
		small = c;
	if (d < small)
		small = d;
	printf("Largest: %d\nSmallest: %d",large,small);
}
