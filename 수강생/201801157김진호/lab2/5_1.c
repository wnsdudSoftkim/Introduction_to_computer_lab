#include <stdio.h>

int main(void) {
	int i; //entered number
	
	printf("Enter a number: ");
	scanf_s("%d", &i);

	if (i < 10) {
		printf("The number %d has 1 digit",i);
	}
	else if (i < 100) {
		printf("The number %d has 2 digit",i);
	}
	else {
		printf("The number %d has 3 digit", i);
	}
}