#include <stdio.h>
int main(void) {
	int n, count=1, f=1;

	printf("Enter n : ");
	scanf_s("%d", &n);

	while (count <= n) {
		f *= count;
		if (count == n) {
			printf("%d! = %d", n, f);
		}
		count += 1;
	
	}
	return 0;
}