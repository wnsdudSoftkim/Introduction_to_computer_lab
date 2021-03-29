#include<stdio.h>

int main(void) {
	int num;
	int count = 0;
	printf("enter a number.");
	scanf_s("%d", &num);
	for (int i = 2; i < num / 2; i++) {
		if (num % i == 0)
			count++;
	}

	if (count >= 1)
		printf("false");
	else
		printf("true");
}