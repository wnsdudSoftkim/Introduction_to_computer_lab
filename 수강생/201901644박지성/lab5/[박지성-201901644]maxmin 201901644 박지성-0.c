# include <stdio.h>
# define N 10
int main(void) 
{
	int max, min, i;
	int num[N];

	printf("Enter numbers : ");
	for (i = 0; i < N; i++) {
		scanf_s("%d", &num[i]);
	}

	min = num[0];
	max = num[0];

	for (i = 0; i < N; i++) {
		if (max < num[i]) max = num[i];
	}
	printf("Maximum value of array : %d\n", max);

	for (i = 0; i < N; i++) {
		if (min > num[i]) min = num[i];
	}
	printf("Minimum value of array : %d\n", min);

	return 0;
}
