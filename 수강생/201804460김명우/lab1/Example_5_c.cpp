#include <stdio.h>

int main() {

	int amount = 0;

	printf("Enter a dollar amount : ");
	scanf_s("%d", &amount);
	
	printf("$20 bills: %d\n", amount / 20 );
	printf("$10 bills: %d\n", (amount - 20 * (amount / 20)) / 10);
	printf("$5 bills: %d\n", (amount - (20 * (amount / 20)) - (10 * ((amount - 20 * (amount / 20)) / 10)))/5);
	printf("$1 bills: %d\n", (amount - (20 * (amount / 20)) - (10 * ((amount - 20 * (amount / 20)) / 10)) - 5 * ((amount - (20 * (amount / 20)) - (10 * ((amount - 20 * (amount / 20)) / 10))) / 5)) / 1);

}