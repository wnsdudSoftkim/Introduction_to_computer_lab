#include <stdio.h>
// eÃâ·Â
int main() {
	int n;
	printf("Enter integer: ");
	scanf_s("%d",&n);
	float sum = 1;
	float e = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			sum *= j;
		}
		e += (1.0/ sum);
		sum = 1;
	}
	printf("%f", e);
}