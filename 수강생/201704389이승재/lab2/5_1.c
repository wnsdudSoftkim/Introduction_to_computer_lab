#include<stdio.h>
int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	if (num > 0 && num < 10)
		printf("number %d have 1 digits", num);
	else if (num >= 10 && num < 100)
		printf("number %d have 2 digits", num);
	else if (num >= 100 && num < 1000)
		printf("number %d have 3 digits", num);
	else if (num >= 1000 && num < 10000)
		printf("number %d have 4 digits", num);
	else
		printf("numbers are from 1 to 9999. \n");

	return 0;

}