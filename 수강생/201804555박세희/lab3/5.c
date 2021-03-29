#include <stdio.h>

main() {

	int a;
	int i;

	int fact = 1;

	printf("Enter a integer:");
	scanf_s("%d", &a);

	for (i = 1; i <= a;++i) {
		fact *= i;
	}



	printf("%d! = %d", a, fact);

}