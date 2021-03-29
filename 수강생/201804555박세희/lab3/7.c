#include <stdio.h>


main() {

	int i,c, num;
	int a = 0, b = 1;
	

	printf("Enter a number:");
	scanf_s("%d", &num);

	for (i = 1;i <= num; i++) {

		printf("%d  ", a);
		c = a + b;
		a = b;
		b = c;
	}

	return 0;

}