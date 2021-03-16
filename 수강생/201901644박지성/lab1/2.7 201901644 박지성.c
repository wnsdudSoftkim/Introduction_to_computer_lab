#include <stdio.h>

int main(void)
{
	int amount, twenties, tens, fives,
		ones, amount_reduced_by_twenties, amount_reduced_by_tens;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	twenties = amount / 20;
	amount_reduced_by_twenties = amount - (20 * twenties);
	
	tens = amount_reduced_by_twenties / 10;
	amount_reduced_by_tens = amount_reduced_by_twenties - (10*tens);

	fives = amount_reduced_by_tens / 5;
	ones = amount_reduced_by_tens - (5*fives);

	printf("\n");      //blank line//

	printf("$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf("$5 bills: %d\n", fives);
	printf("$1 bills: %d\n", ones);

	return 0;
}