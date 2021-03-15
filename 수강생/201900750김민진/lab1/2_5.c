// asks the user to enter a value for x and then displays the value of following polynomial

#include <stdio.h>

main_5()
{
	int x;
	
	printf("Enter a value for x to compute the polynomial: ");
	scanf_s("%d", &x);

	int result = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;

	printf("The value of the polynomial is %d.\n", result);

}