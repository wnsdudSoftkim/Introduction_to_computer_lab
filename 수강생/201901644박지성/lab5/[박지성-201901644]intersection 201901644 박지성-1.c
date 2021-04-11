# include <stdio.h>
# define N 10
int main(void) 
{
	int i, j;
	int A[N], B[N];
	printf("Enter elements of set A one by one : ");
	for (i = 0; i < N; i++) {
		scanf_s("%d", &A[i]);
		for (j = 0; j < i; j++) {
			if (A[i] == A[j]) {
				printf("Duplicated\n");
				return 0;
			}
		}
	}
	printf("Enter elements of set B one by one : ");
	for (i = 0; i < N; i++) {
		scanf_s("%d", &B[i]);
		for (j = 0; j < i; j++) {
			if (B[i] == B[j]) {
				printf("Duplicated\n");
				return 0;
			}
		}
	}

	printf("Intersection of two sets\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (A[i] == B[j]) printf("%d ", B[j]);
		}
	}

	return 0;
}
