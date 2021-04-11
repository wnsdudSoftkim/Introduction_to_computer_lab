#include <stdio.h>
#define N 5 //how many elements input?
int main() {
	
	int a[N],b[N],anb[N];
	int idx = 0;

	printf("Enter elements of set A (integer type) : ");
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &a[i]);
	}
	
	printf("Enter elements of set B (integer type) : ");
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &b[i]);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (a[i] == b[j]) {
				anb[idx] = a[i];
				idx++;
			}
			
		}
	}
	printf("Intersection of A and B : {");
	for (int i = 0; i < idx; i++) {
		printf("%d ", anb[i]);
	}
	printf("}");



}