#include <stdio.h>
int main(void) {
	int m, n, r, a,b;
	printf("Enter a fraction : ");
	scanf_s("%d/%d", &m, &n);
	a = m;
	b = n;
	do {
		r = m % n;
		m = n;
		n = r;
	} while (n != 0);

	printf("In lowest terms : %d/%d",a/m,b/m );
	return 0;
}