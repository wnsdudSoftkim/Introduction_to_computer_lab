#include <stdio.h>

int main(void) {
	int num;
	printf("Enter a number. It will print odd numbers between 0 and your number ");
	scanf_s("%d", &num);

	for (int i = 0; i <= num; i++) {
		if (i % 2 != 0) {
			printf("%d\n", i);
		}
	}
}
