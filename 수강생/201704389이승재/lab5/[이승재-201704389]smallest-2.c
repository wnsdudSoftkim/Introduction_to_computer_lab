#include<stdio.h>

int main(void)
{
	int A[5];
	int i;
	int min = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Enter the number: \n");
		scanf_s("%d", &A[i]);
	}

	min = A[0];
	for (i = 1; i < 5; i++)
	{
		if (min > A[i])
			min = A[i];
	}
	printf("Smallest number is %d", min);

	return 0;
}