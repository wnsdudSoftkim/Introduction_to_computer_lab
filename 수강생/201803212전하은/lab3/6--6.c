#include <stdio.h>
int main(void) {
	int n, m, i, f , k;

	printf("Enter n, m : ");
	scanf_s("%d %d", &n, &m);

	for (i = n; i <= m; i++) {
		f = 1;
		for (k = 1; k <= i; k++) {
			f *= k;
		}
		printf(" %d! = %d ", i, f);

	}
	return 0;
}