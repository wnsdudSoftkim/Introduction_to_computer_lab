#include <stdio.h>

int main(void) {
	int num;
	printf("enter a number n. It will generate Fibonacci sequence up to a number n.");
	scanf_s("%d", &num);

	int* arr = malloc(sizeof(int) * num);
	arr[0] = 0;
	arr[1] = 1;
	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	for (int i = 2; i <= num; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		printf("%d\n", arr[i]);
	}
}