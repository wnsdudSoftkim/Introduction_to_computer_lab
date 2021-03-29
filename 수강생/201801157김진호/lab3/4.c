//4: Display a list of prime numbers between numbers n and m.
#include <stdio.h>
int main() {
	int m, n;
	printf("Enter two number n m : ");
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
	//m>n
	for (;n<=m;n++) {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				break;
			}
			else {
				printf("%d\n", n);
				break;
			}
			
		}

	}

}