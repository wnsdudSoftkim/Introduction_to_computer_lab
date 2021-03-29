#include <stdio.h>
int main(void) {
	int n, i=0, temp, previous=0, current=1;

	printf("Enter n : ");
	scanf_s("%d", &n);

	while (i < n) {
		printf("%d ", current);
		temp = previous;
		previous = current;
		current = temp + previous;
		i += 1;
	}
	return 0;
}