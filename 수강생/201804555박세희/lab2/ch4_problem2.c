#include <stdio.h>

main() {

	int a=0;


	printf("Enter a two-digits number:");
	scanf_s("%d", &a);


	printf("The reversal is:%d%d", a%10, a/10);

	return 0;



}