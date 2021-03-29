#include <stdio.h>

int main() {

	int n;
	float num, largest = 0;

	for (float num = 0; num <= 6; num++) {
		printf("Enter a number: ");
		scanf_s("%f", &num); 

		if (num > largest)
			largest = num;
	}
	printf("The largest number entered was %f", largest);
}