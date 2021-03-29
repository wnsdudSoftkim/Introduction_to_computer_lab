#include <stdio.h>

int main() {
	float a;
	float largest = 0;


	while (1) {
		printf("Enter a number: ");
		scanf_s("%f", &a);
		if (largest < a) {
			largest = a;
		}
		if (a <= 0) {
			break;
		}
	}

	printf("The largest number entered was %.2f", largest);
	


}