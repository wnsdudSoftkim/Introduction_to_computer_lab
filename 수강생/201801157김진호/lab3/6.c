// Find factorial of all numbers between numbers n and m.
#include <stdio.h>
int main() {
	int m, n;
	printf("Enter two numbers m n : ");
	scanf_s("%d %d", &m, &n);
	if (m > n) {
	}
	else if (m == n) {
		printf("numbers are same!!");
	}
	else {
		int k;
		k = n;
		n = m;
		m = k;
	}
	int sum=1;
	for (;n<=m;n++) {
		sum = n * sum;
	}
	printf("%d", sum);
	
	}
