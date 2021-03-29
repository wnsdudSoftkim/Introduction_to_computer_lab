#include <stdio.h>

int main(void) {
	float num, max=0;
	for (;;) {
		printf("Enter a numer : ");
		scanf_s("%f", &num);
		if (num == 0) {
			break;
		}
		else if (num > max) {
			max = num;
		}
	}
	printf("The largest number entered was %.2f", max);

	return 0;
}