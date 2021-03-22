#include <stdio.h>


main() {

	int income;


	printf(" Enter a taxable income: $");
	scanf_s("%d", &income);

	printf("\nIncome           Amount of tax\n");



	if (income <= 750)
		printf("Not over $750    1%% of income");

	else if (income >= 750 && income <= 2250)
		printf("$750-$2,250     $%7.50 plus 1%% of $750 ");


	else if (income > 2250 && income <= 3750)
		printf("$2250-%$750      $37.50 plus 3%% of $2250");

	else if (income > 3750 && income <= 5250)
		printf("$3,750-$5,250    $82.50 plus 4%% of $3,750");

	else if (income > 5250 && income <= 7000)
		printf("$5,250-$7,000    $142.50 plus 5%% of $5,250");

	else if (income > 7000)
		printf("Over $7,000      $230.00 plus 6%% of $7,000");




	return 0;


}