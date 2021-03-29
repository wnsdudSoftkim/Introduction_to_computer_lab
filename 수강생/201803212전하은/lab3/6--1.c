#include <stdio.h>
int main(void) {
	int n, k=1;
	printf("Enter n : ");
	scanf_s("%d", &n);
	while (k <= n) {
		if (k % 2 == 0) {
			printf("%d ", k);
		}
		k++;
	}
	return 0;
}