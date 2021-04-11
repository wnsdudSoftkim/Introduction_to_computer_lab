#include<stdio.h>

int main(void)
{
	int A[5];
	int i;
	int max = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Enter the number: \n");
		scanf_s("%d", &A[i]);
	}
	max = A[0];
	for (i = 1; i < 5; i++)
	{
		if (max < A[i])
			max = A[i];
	}
	printf("Largest number is %d", max);

	return 0;
}