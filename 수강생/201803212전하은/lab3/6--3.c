#include <stdio.h>
int main(void) {
	int n, k = 2;
	printf("Enter n : ");
	scanf_s("%d", &n);
	while (k <= n/2) {
		if (n%k == 0) {
			printf("%d is not prime number.", n);
			break;
		}
		k++;
		if(k == n/2){
			printf("%d is prime number.", n);
		}
	}
	return 0;
}