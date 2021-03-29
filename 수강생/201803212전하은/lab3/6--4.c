#include <stdio.h>
int main(void) {
	int n, m, k, p;

	printf("Enter n and m : ");
	scanf_s("%d %d", &n, &m);

	for (p = n; p < m; p++) {
		k = 2;
		while (k <= p / 2) {
			if (p % k == 0) {
				break;
			}
			
			if (k == p / 2) {
				printf("%d ", p);
			}
			k += 1;
		}
	}
	
	return 0;
}