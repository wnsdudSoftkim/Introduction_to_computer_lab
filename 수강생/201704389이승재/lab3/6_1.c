#include<stdio.h>

int main(void)
{
	float number, largest = 0.0f;

	do {
		printf("Enter a number :");
		scanf_s("%f", &number);
		if (number > largest)
			largest = number;
	} 	while (number > 0.0f);

	printf("The largest number entered was %.2f", largest);

	return 0;
}