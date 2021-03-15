#include <stdio.h>

int main(void) {


	int a;
	int b;
	int c;
	


	printf("Enter a dollars:");
	scanf_s("%d", &a);

	printf("Enter a cents:");
	scanf_s("%d", &b);

	c = (a + b) * 0.05 + (a + b);

	printf("%d", c);


	return 0;



}