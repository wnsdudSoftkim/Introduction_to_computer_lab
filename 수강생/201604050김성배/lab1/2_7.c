#include <stdio.h>

int main() {
	int dollar;
	printf("Enter a dollar amount : ");
	scanf_s("%d", &dollar);

	int bills_20, bills_10, bills_5;

	bills_20 = dollar / 20;
	dollar = dollar - (bills_20 * 20);

	bills_10 = dollar / 10;
	dollar = dollar - (bills_10 * 10);

	bills_5 = dollar / 5;

	dollar = dollar - (bills_5 * 5);

	printf("$20 bills: %d\n", bills_20);
	printf("$10 bills: %d\n", bills_10);
	printf("$5 bills: %d\n", bills_5);
	printf("$1 bills: %d\n", dollar);

	

}