#include <stdio.h>
int main(void) {
	int num, digit;
	printf("Enter a number: ");
	scanf_s("%d", &num);
	if (num > 0 && num <= 9)
		digit = 1;
	else if (num >= 10 && num < 100)
		digit = 2;
	else if (num >= 100 && num < 1000)
		digit = 3;
	else if (num >= 1000 && num < 10000)
		digit = 4;
	else
		printf("Worng number");
	
	printf("The number %d has %d digits\n",num, digit);


	return 0;
}