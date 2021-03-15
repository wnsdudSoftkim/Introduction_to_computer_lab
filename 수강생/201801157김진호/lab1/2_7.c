#include <stdio.h>

int main(void)
{
	int a, dollar20, dollar10, dollar5, dollar1;
	printf("Enter a dollar amount : ");
	scanf_s("%d", &a);

	dollar20 = a / 20;
	dollar10 = (a - dollar20 * 20)/10;
	dollar5 = (a - dollar20 * 20 - dollar10 * 10) / 5;
	dollar1 = (a - dollar20 * 20 - dollar10 * 10 - dollar5*5);
	printf("$20 bills: %d\n", dollar20);
	printf("$10 bills: %d\n", dollar10);
	printf("$5 bills: %d\n", dollar5);
	printf("$1 bills: %d\n", dollar1);
}