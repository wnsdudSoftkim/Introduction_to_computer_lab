#include <stdio.h>
int main(void) {
	int n, f = 1, count = 0;
	float e = 1;
	
	printf("Enter n : ");
	scanf_s("%d",&n);
	while(count <= n){
		f *= count;
		e += 1 / (float)f;
		count += 1;
	}

	printf("appproximates of e : %f", e);
	
	return 0;
}