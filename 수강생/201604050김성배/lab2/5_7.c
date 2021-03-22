#include <stdio.h>

int main() {
	int i1, i2, i3, i4, largest, smallest;

	printf("Enter four integers: ");
	scanf_s("%d %d %d %d", &i1, &i2, &i3, &i4);

	largest = (i1 > i2) ? i1 : i2;
	if (largest < i3) {
		largest = i3;
	}
	if (largest < i4) {
		largest = i4;
	}

	smallest = (i1 < i2) ? i1 : i2;
	if (smallest > i3) {
		smallest = i3;
	}
	if (smallest > i4) {
		smallest = i4;
	}

	printf("Largest: %d \nSmallest: %d", largest, smallest);

	return 0;
}