#include <stdio.h>

int main_7(void)
{
	int amount;
	int a,b,c,d;
	printf("Enter a dollar amount : ");
	scanf_s("%d", &amount);
	a = amount / 20;
	b = (amount - a) / 10;
	c = (amount - a - b) / 5;
	d = amount - a - b - c;
	printf("$20 bills: %p",&a);
	printf("$10 bills: %p", &b);
	printf("$5 bills: %p", &c);
	printf("$1 bills: %p", &d);
	

	return 0;
}