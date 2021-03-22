#include <stdio.h>

int main(void)
{
	int i;

	printf("Enter a two-digit number : ");
	scanf_s("%d", &i);

	printf("The reversal is : ");
	do {
		printf("%d", i % 10);
		i /= 10;
	} while (i);
	printf("\n");

	return 0;
}