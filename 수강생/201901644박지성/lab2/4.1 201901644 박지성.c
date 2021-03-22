#include <stdio.h>
int main(void)
{
	int num, reversal;
	printf("Enter a two-digit number: ");
	scanf_s("%d", &num);
	reversal = (num % 10) * 10 + (num / 10);
	printf("The reversal is: %d\n", reversal);
	return 0;
}