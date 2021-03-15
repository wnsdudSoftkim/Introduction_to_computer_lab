// program that asks the user to enter a U.S. dollar amount
// and then shows how to pay that amount using the smallest number of
// $20, $10, $5, $1 bills

#include <stdio.h>

main_7()
{
	int dollar;

	printf("Enter a dollar amount: ");
	scanf_s("%d", &dollar);

	int d20 = dollar / 20;
	dollar %= 20;

	int d10 = dollar / 10;
	dollar %= 10;

	int d5 = dollar / 5;
	dollar %= 5;

	printf("$20 bills: %d\n", d20);
	printf("$10 bills: %d\n", d10);
	printf("$5 bills: %d\n", d5);
	printf("$1 bills: %d\n", dollar);

}