#include <stdio.h>

int main() {
	int dollar=0;
	printf("Enterr a dollar amount : ");
	scanf("%d", &dollar);

	if (dollar / 20 != 0) {
		// dollar = dollar % 20;
		printf("%d", dollar / 20);
		dollar = dollar % 20;
	}
	if (dollar / 10 != 0) {
		// dollar = dollar % 10;
		printf("%d", dollar / 10);
		dollar = dollar % 10;
	}
	if (dollar / 5 != 0) {
		//dollar = dollar % 5;
		printf("%d", dollar / 5);
		dollar = dollar % 5;
	}
	printf("%d", dollar);
	
}