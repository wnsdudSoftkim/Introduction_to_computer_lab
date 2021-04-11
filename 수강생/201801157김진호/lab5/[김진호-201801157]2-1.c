#include <stdio.h>
#define N 5 //how many elements input?
int main() {

	int a[N], b[N], aub[2*N];

	printf("Enter elements of set A (integer type) : ");
	for (int i = 0; i < N; i++) 
	{
		scanf_s("%d", &a[i]);
	}

	printf("Enter elements of set B (integer type) : ");
	for (int i = 0; i < N; i++) 
	{
		scanf_s("%d", &b[i]);
	}
	int idx = N;
	for (int i = 0; i < N; i++)
	{
		aub[i] = a[i];
	}
	int k = 5;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (b[i] == a[j]) {
				break;
			}
			if (j == N - 1) {
				aub[k] = b[i];
				k++;
			}
			
		}
	}
	
	printf("Union of A and B : {");
	for (int i = 0; i < k; i++) {
		printf("%d ", aub[i]);
	}
	printf("}");
}