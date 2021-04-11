#include <stdio.h>

int main(void) {

	int num[20];
	char temp;
	printf("Enter a list of numbers. It will return the smallest one.");
	scanf_s("%d", &num[0]);
	int smallest = num[0];
	int index = 1;
	while ((temp = getchar()) != '\n') {
		scanf_s("%d", &num[index]);
		index++;
	}
	for (int i = 0; i < index; i++) {
		if (smallest > num[i]) {
			smallest = num[i];
		}
	}
	printf("%d", smallest);

}