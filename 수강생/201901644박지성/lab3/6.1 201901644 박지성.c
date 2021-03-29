#include <stdio.h>
int main(void)
{
	float number = 1;
	float max = 0;

	while (number) {
		printf("Enter a number: ");
		scanf_s("%f", &number);

		if (number > max) {
			max = number;
		}
	}

	printf("The largest number entered was %.2f", max);
	return 0;
}