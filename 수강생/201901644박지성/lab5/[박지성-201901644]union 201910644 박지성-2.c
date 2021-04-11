# include <stdio.h>
# define N 5
int main(void) 
{
	int i, j, k = 0, flag = 0;
	int A[N], B[N], U[N + N];

	printf("Enter elements of set A one by one : ");
	for (i = 0; i < N; i++) {
		scanf_s("%d", &A[i]);
		U[i] = A[i];
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

	for (i = 0; i < N; i++) {
		flag = 0;
		for (j = 0; j < k; j++)
			if (A[i] == U[j]) {
				flag = 1;
				break;
			}
		if (!flag) {
			U[k] = A[i];
			k++;
		}
	}

	for (i = 0; i < N; i++) {
		flag = 0;
		for (j = 0; j < k; j++)
			if (B[i] == U[j]) {
				flag = 1;
				break;
			}
		if (!flag) {
			U[k] = B[i];
			k++;
		}
	}

	printf("Union of two sets : \n");
	for (i = 0; i < k; i++) {
		printf("%d ", U[i]);
	}
	return 0;
}
