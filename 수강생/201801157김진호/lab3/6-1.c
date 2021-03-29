#include <stdio.h>

int main() {
	float a,b,m;
	printf("Enter a number: ");
	scanf_s("%f", &a);
	m = a;
	while (1) {
		printf("Enter a number: ");
		scanf_s("%f", &b);
		if (b == 0) break;
		else if (a > b) continue;
		else m = b;

	}
	printf("The largest number entered was : %f", m);


}