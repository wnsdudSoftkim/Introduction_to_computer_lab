// write a program that asks the user to enter a two-digit number,
// then prints the number with its digits reversed,

#include <stdio.h>

int main_4_1()
{
	int num;

	printf("Enter two-digit number: ");
	scanf_s("%d", &num);

	int n1 = num % 10;
	int n2 = num / 10;

	printf("The reversal is: %d%d\n", n1, n2);

	return 0;
}