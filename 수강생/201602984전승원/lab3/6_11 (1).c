# include <stdio.h>

int main(void) {
	int n;
	scanf_s("%d", &n);
	float e = 1.00f;
	for (int i = 1; i <= n; i++) {
		float ftr = 1.00f;
		for (int j = i; j > 0; j--) {
			ftr *= j;
		}
		e += (1 / ftr);
	}

	printf("%.2f", e);
}